Reversing a queue is a very common interview task! The goal is to take a queue like `[10, 20, 30]` and turn it into `[30, 20, 10]`.

Since a Queue is **FIFO** (First-In-First-Out) and a Stack is **LIFO** (Last-In-First-Out), the Stack is our best friend for this job!

# 🔄 Reversing a Queue: Two Methods (C++)

## 1. The Iterative Method (Using an Explicit Stack) 🛠️
This is the most straightforward way. We use an actual `std::stack` as a middleman.

### 🖼️ The Logic Flow:
1.  **Step A:** Dequeue everything from the Queue and Push it into the Stack. (The order flips!)
2.  **Step B:** Pop everything from the Stack and Enqueue it back into the Queue.

```text
Queue: [10, 20, 30]  -->  Stack: [30, 20, 10]  -->  Queue: [30, 20, 10]
        (Front)                    (Top)                    (Front)
```

### 💻 Iterative C++ Code:
```cpp
#include <iostream>
#include <queue>
#include <stack>
using namespace std;

void reverseQueueIterative(queue<int>& q) {
    stack<int> s;

    // Step 1: Move all elements from queue to stack
    while (!q.empty()) {
        s.push(q.front());
        q.pop();
    }

    // Step 2: Move all elements from stack back to queue
    while (!s.empty()) {
        q.push(s.top());
        s.pop();
    }
}
```

---

## 2. The Recursive Method (Using the Call Stack) 🧠
This way is "elegant" because we don't create a stack object ourselves. Instead, we use the **Function Call Stack** (the computer's internal memory) to hold the numbers for us.

### 🖼️ The Logic Flow:
1.  **Base Case:** If the queue is empty, stop.
2.  **Save & Pop:** Take the front element and save it in a variable `x`.
3.  **Recursion:** Call the function again for the remaining queue.
4.  **Push Back:** Once the recursive calls start finishing, push `x` back into the queue.

### 💻 Recursive C++ Code:
```cpp
#include <iostream>
#include <queue>
using namespace std;

void reverseQueueRecursive(queue<int>& q) {
    // Base Case: If queue is empty, we are done
    if (q.empty()) {
        return;
    }

    // Step 1: Store the front element
    int x = q.front();
    q.pop();

    // Step 2: Recursive call to reverse the rest of the queue
    reverseQueueRecursive(q);

    // Step 3: Push the stored element to the back
    // This happens as the function "unwinds"
    q.push(x);
}
```

---

## 📊 Comparison Table

| Feature | Iterative Approach | Recursive Approach |
| :--- | :--- | :--- |
| **Middleman** | An explicit `std::stack` | The internal `Function Call Stack` |
| **Code Style** | Loop-based (Easy to read) | Elegant and shorter |
| **Complexity** | $O(N)$ Time, $O(N)$ Space | $O(N)$ Time, $O(N)$ Space |
| **Risk** | Safe for very large queues | Risk of `Stack Overflow` if queue is huge |

---

## 💡 Teacher's Pro-Tips

*   **Why does the Stack reverse it?** Imagine putting colored plates in a box. The first one you put in (10) ends up at the bottom. When you take them out, the one on top (30) comes out first. This is why Stack is the perfect tool for reversing.
*   **Interview Tip:** If an interviewer asks you to reverse a queue **without** using any other data structure, they are secretly asking for the **Recursive** method! (Even though recursion technically uses the system stack).
*   **Time Complexity:** Both methods are $O(N)$ because every element is visited exactly twice.

---

## 🗺️ Visualizing the Recursive "Unwinding"
```text
Call 1: Hold 10, call reverse()
   Call 2: Hold 20, call reverse()
      Call 3: Hold 30, call reverse()
         Call 4: Empty! Return.
      Call 3: Now Push 30 back -> Queue: [30]
   Call 2: Now Push 20 back -> Queue: [30, 20]
Call 1: Now Push 10 back -> Queue: [30, 20, 10]
```

**Bravo!** You now know how to flip a queue like a pro. Ready to move on to the next topic or try a practice problem? 🚀✨