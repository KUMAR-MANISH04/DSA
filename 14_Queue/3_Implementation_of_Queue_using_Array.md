# 🚀 C++ Queue Implementation: Linear vs. Circular

In C++, we wrap everything inside a `class`. This keeps our data (the array) and our actions (enqueue/dequeue) together in one "object."

---

## 1. The Naive (Linear) Approach 🚶‍♂️
This is the simplest way, but remember: once the `rear` hits the end, you can't add more items even if the front is empty!

```cpp
#include <iostream>
using namespace std;

class LinearQueue {
private:
    int* arr;       // Pointer to create a dynamic array
    int front;      // Index of the front element
    int rear;       // Index of the rear element
    int capacity;   // Maximum size of the queue

public:
    // Constructor to initialize the queue
    LinearQueue(int size) {
        capacity = size;
        arr = new int[capacity];
        front = -1;
        rear = -1;
    }

    // Check if the queue is full
    bool isFull() {
        if (rear == capacity - 1) {
            return true;
        } else {
            return false;
        }
    }

    // Check if the queue is empty
    bool isEmpty() {
        if (front == -1 || front > rear) {
            return true;
        } else {
            return false;
        }
    }

    // Add an item to the back
    void enqueue(int value) {
        if (isFull()) {
            cout << "❌ Queue is Full! Cannot add " << value << endl;
        } else {
            if (front == -1) {
                front = 0; // Set front to 0 if it's the first element
            }
            rear++;
            arr[rear] = value;
            cout << "📥 Enqueued: " << value << endl;
        }
    }

    // Remove an item from the front
    void dequeue() {
        if (isEmpty()) {
            cout << "⚠️ Queue is Empty! Nothing to remove." << endl;
        } else {
            cout << "📤 Dequeued: " << arr[front] << endl;
            front++; // Move front forward
        }
    }

    // Look at the front item
    int getFront() {
        if (isEmpty()) {
            return -1;
        } else {
            return arr[front];
        }
    }

    // Look at the rear item
    int getRear() {
        if (isEmpty()) {
            return -1;
        } else {
            return arr[rear];
        }
    }
};
```

---

## 2. The Circular Approach (The Smart Way) 🎡
This approach uses the `%` (modulo) operator to make the `rear` jump back to the beginning of the array when it hits the end.

```cpp
#include <iostream>
using namespace std;

class CircularQueue {
private:
    int* arr;
    int front;
    int rear;
    int capacity;

public:
    CircularQueue(int size) {
        capacity = size;
        arr = new int[capacity];
        front = -1;
        rear = -1;
    }

    // Is Full logic: The next spot after rear is the front
    bool isFull() {
        if ((rear + 1) % capacity == front) {
            return true;
        } else {
            return false;
        }
    }

    bool isEmpty() {
        if (front == -1) {
            return true;
        } else {
            return false;
        }
    }

    void enqueue(int value) {
        if (isFull()) {
            cout << "🚫 Queue Full! Wrap-around space is also used." << endl;
        } else {
            if (front == -1) {
                front = 0; // Initialize front on first entry
            }
            // The Magic Formula: (Index + 1) % Capacity
            rear = (rear + 1) % capacity; 
            arr[rear] = value;
            cout << "📥 Circular Enqueue: " << value << " at index " << rear << endl;
        }
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "⚠️ Empty Queue!" << endl;
        } else {
            cout << "📤 Circular Dequeue: " << arr[front] << endl;
            
            // If there was only one item, reset the queue
            if (front == rear) {
                front = -1;
                rear = -1;
            } else {
                // Move front forward circularly
                front = (front + 1) % capacity;
            }
        }
    }

    int getFront() {
        if (isEmpty()) {
            return -1;
        } else {
            return arr[front];
        }
    }

    int getRear() {
        if (isEmpty()) {
            return -1;
        } else {
            return arr[rear];
        }
    }
};
```

---

## 🖼️ Visualizing the Difference

### Linear Queue Problem:
Imagine `Size = 3`.
1. `Enqueue(10), Enqueue(20), Enqueue(30)` -> `[10, 20, 30]` (Rear is at the end).
2. `Dequeue(), Dequeue()` -> `[__, __, 30]` (Front is at index 2).
3. Try `Enqueue(40)` -> **ERROR!** Even though index 0 and 1 are empty, the `rear` cannot move past the last index.

### Circular Queue Solution:
1. Same as above, but when you try `Enqueue(40)`...
2. The formula `(rear + 1) % 3` calculates `(2 + 1) % 3 = 0`.
3. `Rear` jumps to index **0**.
4. Array becomes: `[40, __, 30]`. **Space is saved!** ✅

---

## 💡 Key Takeaways for your C++ Journey

*   **Constructors:** Notice how we used `new int[capacity]`. This creates the array in the "Heap" memory so it survives as long as the object exists.
*   **No Ternary? No Problem:** Using `if-else` makes your code much more readable for beginners and teammates.
*   **The Modulo `%`:** In coding, `%` isn't for percentage; it's the "Remainder" operator. It's the secret to making things circular (like a clock: after 12 comes 1).

**Teacher's Question:** Would you like to see a `main()` function to run this code and see the output in your console? Or should we move on to **Linked List Implementation** in C++? 🌟🖥️