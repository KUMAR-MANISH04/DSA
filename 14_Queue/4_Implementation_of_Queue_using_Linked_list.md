# 🔗 C++ Queue: Linked List Implementation
### "The Flexible Chain"

In this implementation, each element is a **Node** created on the **Heap**. We don't have to worry about the queue being "Full" because it grows dynamically!

---

## 1. 🧱 The Building Blocks (The Node)
First, we define what a single link in our chain looks like.

```cpp
#include <iostream>
using namespace std;

// Each Node stores data and a pointer to the next person in line
struct Node {
    int data;
    Node* next;

    // Constructor to make creating nodes easier
    Node(int val) {
        data = val;
        next = nullptr; // Using nullptr instead of NULL (Modern C++)
    }
};
```

---

## 2. 🏗️ The Queue Class
We wrap all operations inside a class. This allows us to manage **Memory Cleanup** automatically using a **Destructor**.

```cpp
class Queue {
private:
    Node* front; // Points to the first node
    Node* rear;  // Points to the last node
    int size;    // Tracks the number of items

public:
    // Constructor: Initialize an empty queue
    Queue() {
        front = nullptr;
        rear = nullptr;
        size = 0;
    }

    // 📥 ENQUEUE: Adding to the back
    void enqueue(int value) {
        Node* newNode = new Node(value); // Allocate memory

        // Corner Case: If the queue is empty
        if (rear == nullptr) {
            front = newNode;
            rear = newNode;
        } else {
            // Link the current rear to the new node
            rear->next = newNode;
            // Move rear to the new node
            rear = newNode;
        }
        size++;
        cout << "📥 Enqueued: " << value << endl;
    }

    // 📤 DEQUEUE: Removing from the front
    void dequeue() {
        // Corner Case: Underflow (Empty Queue)
        if (front == nullptr) {
            cout << "⚠️ Queue Underflow! Nothing to remove." << endl;
            return;
        }

        // 1. Keep track of the node to be deleted
        Node* temp = front;

        // 2. Move front to the next node
        front = front->next;

        // Corner Case: If the queue becomes empty after removal
        if (front == nullptr) {
            rear = nullptr;
        }

        // 3. CLEAN UP MEMORY
        cout << "📤 Dequeued: " << temp->data << endl;
        delete temp; 
        size--;
    }

    // 🔍 IS EMPTY
    bool isEmpty() {
        if (front == nullptr) {
            return true;
        } else {
            return false;
        }
    }

    // 👀 GET FRONT
    int getFront() {
        if (front == nullptr) {
            return -1;
        } else {
            return front->data;
        }
    }

    // 🏁 GET REAR
    int getRear() {
        if (rear == nullptr) {
            return -1;
        } else {
            return rear->data;
        }
    }

    // 📊 GET SIZE
    int getSize() {
        return size;
    }

    // 🧹 DESTRUCTOR: Prevents Memory Leaks
    // If the Queue object is destroyed, we must delete all remaining nodes!
    ~Queue() {
        while (front != nullptr) {
            Node* temp = front;
            front = front->next;
            delete temp;
        }
        cout << "🧹 Memory Cleaned: All nodes deleted." << endl;
    }
};
```

---

## 🧪 3. Corner Test Cases Explained

| Test Scenario | Logic Handled |
| :--- | :--- |
| **Dequeue an Empty Queue** | The `if (front == nullptr)` check prevents the program from crashing. |
| **Enqueue into Empty Queue** | We must set both `front` and `rear` to the new node. |
| **Removing the LAST Item** | When the last item is removed, `front` becomes `nullptr`. We must also manually set `rear` to `nullptr`. |
| **Memory Leak Prevention** | The **Destructor** (`~Queue`) ensures that if you stop using the queue, all the "Heap" memory is returned to the computer. |

---

## 🖼️ Visual Logic Diagram

### After `enqueue(10)`, `enqueue(20)`:
```text
Front -> [10 | next] -> [20 | next] -> nullptr
                          ^
                         Rear
```

### After `dequeue()`:
```text
1. Temp = Front (points to 10)
2. Front = Front->next (Front now points to 20)
3. delete Temp (Memory for 10 is erased)

Front -> [20 | next] -> nullptr
           ^
          Rear
```

---

## 💡 Teacher's Pro-Tips for C++

1.  **`new` vs `delete`:** In C++, every `new` must have a matching `delete`. If you `new` a node in `enqueue` but never `delete` it in `dequeue`, your computer's RAM will slowly fill up. 🧱
2.  **`nullptr`:** Always use `nullptr` instead of `0` or `NULL`. It is safer in modern C++ and prevents bugs.
3.  **The Destructor:** This is a special function that runs automatically when the object goes out of scope. It is your "safety net" to make sure your program is clean. 🧼

**What's next?** We have covered Array (Linear & Circular) and Linked List implementations. Would you like to tackle **Priority Queues** or perhaps try some **Standard Template Library (STL)** queue basics? 🚀✨