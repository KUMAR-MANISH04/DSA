// queue_demo.cpp
// Demonstrates two array-based queue implementations in C++:
// 1) LinearQueue (simple linear array queue — does not reuse freed slots)
// 2) CircularQueue (array-based circular queue — reuses freed slots)
// Includes all common queue operations and an interactive menu to exercise them.
// Compile with: g++ -std=c++17 queue_demo.cpp -o queue_demo

#include <iostream>
#include <vector>
#include <limits>

using std::cout;
using std::cin;
using std::endl;

// Helper to clear input on invalid read
void clearInput()
{
    cin.clear();
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

// ------------------------ Linear Queue ------------------------
// Linear queue is implemented using a fixed-size array. After dequeues,
// the freed front positions are not reused until the queue becomes empty
// (this demonstrates the limitation of a naive linear array queue).
class LinearQueue {
    std::vector<int> arr;
    int capacity;
    int frontIndex; // index of current front element
    int rearIndex;  // index of current rear element

public:
    explicit LinearQueue(int cap)
        : arr(cap), capacity(cap), frontIndex(0), rearIndex(-1) {}

    bool isEmpty() const { return rearIndex < frontIndex; }
    bool isFull() const { return rearIndex == capacity - 1; }

    // Enqueue at the rear. Returns true on success, false if full.
    bool enqueue(int value)
    {
        if (isFull()) return false;
        arr[++rearIndex] = value;
        return true;
    }

    // Dequeue from the front. Returns pair(success, value).
    std::pair<bool,int> dequeue()
    {
        if (isEmpty()) return {false, 0};
        int val = arr[frontIndex++];
        // If queue becomes empty after this dequeue, reset indices so queue
        // can be reused from start (optional convenience).
        if (isEmpty()) {
            frontIndex = 0;
            rearIndex = -1;
        }
        return {true, val};
    }

    std::pair<bool,int> front() const
    {
        if (isEmpty()) return {false, 0};
        return {true, arr[frontIndex]};
    }

    int size() const { return isEmpty() ? 0 : (rearIndex - frontIndex + 1); }

    void display() const
    {
        if (isEmpty()) {
            cout << "LinearQueue: [empty]" << endl;
            return;
        }
        cout << "LinearQueue: ";
        for (int i = frontIndex; i <= rearIndex; ++i) cout << arr[i] << " ";
        cout << endl;
    }
};

// ------------------------ Circular Queue ------------------------
// Circular queue uses modular arithmetic to reuse array slots freed by dequeues.
// It keeps a `count` to distinguish full vs empty states.
class CircularQueue {
    std::vector<int> arr;
    int capacity;
    int frontIndex;
    int rearIndex;
    int count; // number of elements currently in queue

public:
    explicit CircularQueue(int cap)
        : arr(cap), capacity(cap), frontIndex(0), rearIndex(-1), count(0) {}

    bool isEmpty() const { return count == 0; }
    bool isFull() const { return count == capacity; }

    bool enqueue(int value)
    {
        if (isFull()) return false;
        rearIndex = (rearIndex + 1) % capacity;
        arr[rearIndex] = value;
        ++count;
        return true;
    }

    std::pair<bool,int> dequeue()
    {
        if (isEmpty()) return {false, 0};
        int val = arr[frontIndex];
        frontIndex = (frontIndex + 1) % capacity;
        --count;
        return {true, val};
    }

    std::pair<bool,int> front() const
    {
        if (isEmpty()) return {false, 0};
        return {true, arr[frontIndex]};
    }

    int size() const { return count; }

    void display() const
    {
        if (isEmpty()) {
            cout << "CircularQueue: [empty]" << endl;
            return;
        }
        cout << "CircularQueue: ";
        int idx = frontIndex;
        for (int i = 0; i < count; ++i) {
            cout << arr[idx] << " ";
            idx = (idx + 1) % capacity;
        }
        cout << endl;
    }
};

// ------------------------ Demo / Menu ------------------------
// A simple interactive menu to exercise both queue implementations.
int main()
{
    cout << "Queue Demonstration - Linear and Circular Implementations" << endl;
    cout << "Enter desired capacity for queues (e.g., 5): ";
    int cap;
    while (!(cin >> cap) || cap <= 0) {
        cout << "Please enter a positive integer for capacity: ";
        clearInput();
    }

    LinearQueue lq(cap);
    CircularQueue cq(cap);

    while (true) {
        cout << "\nChoose queue to operate on:\n";
        cout << " 1) Linear Queue (naive array-based)\n";
        cout << " 2) Circular Queue (reuses freed slots)\n";
        cout << " 0) Exit demo\n";
        cout << "Choice: ";
        int mode;
        if (!(cin >> mode)) { clearInput(); continue; }
        if (mode == 0) break;

        bool usingLinear = (mode == 1);
        if (mode != 1 && mode != 2) {
            cout << "Invalid mode. Try again." << endl;
            continue;
        }

        while (true) {
            cout << "\nOperations (" << (usingLinear ? "Linear" : "Circular") << "):\n";
            cout << " 1) Enqueue\n";
            cout << " 2) Dequeue\n";
            cout << " 3) Peek front\n";
            cout << " 4) Display\n";
            cout << " 5) Show size\n";
            cout << " 9) Switch queue type\n";
            cout << " 0) Exit demo\n";
            cout << "Op: ";

            int op;
            if (!(cin >> op)) { clearInput(); continue; }
            if (op == 0) return 0;
            if (op == 9) break; // switch queue type

            if (usingLinear) {
                switch (op) {
                    case 1: {
                        cout << "Value to enqueue: ";
                        int v; if (!(cin >> v)) { clearInput(); break; }
                        if (!lq.enqueue(v)) cout << "LinearQueue is full (cannot enqueue)." << endl;
                        else cout << "Enqueued " << v << " into LinearQueue." << endl;
                        break;
                    }
                    case 2: {
                        auto res = lq.dequeue();
                        if (!res.first) cout << "LinearQueue is empty (cannot dequeue)." << endl;
                        else cout << "Dequeued " << res.second << " from LinearQueue." << endl;
                        break;
                    }
                    case 3: {
                        auto res = lq.front();
                        if (!res.first) cout << "LinearQueue is empty." << endl;
                        else cout << "Front: " << res.second << endl;
                        break;
                    }
                    case 4: lq.display(); break;
                    case 5: cout << "Size: " << lq.size() << endl; break;
                    default: cout << "Invalid operation." << endl; break;
                }
            } else {
                switch (op) {
                    case 1: {
                        cout << "Value to enqueue: ";
                        int v; if (!(cin >> v)) { clearInput(); break; }
                        if (!cq.enqueue(v)) cout << "CircularQueue is full (cannot enqueue)." << endl;
                        else cout << "Enqueued " << v << " into CircularQueue." << endl;
                        break;
                    }
                    case 2: {
                        auto res = cq.dequeue();
                        if (!res.first) cout << "CircularQueue is empty (cannot dequeue)." << endl;
                        else cout << "Dequeued " << res.second << " from CircularQueue." << endl;
                        break;
                    }
                    case 3: {
                        auto res = cq.front();
                        if (!res.first) cout << "CircularQueue is empty." << endl;
                        else cout << "Front: " << res.second << endl;
                        break;
                    }
                    case 4: cq.display(); break;
                    case 5: cout << "Size: " << cq.size() << endl; break;
                    default: cout << "Invalid operation." << endl; break;
                }
            }
        }
    }

    cout << "Exiting demo." << endl;
    return 0;
}
