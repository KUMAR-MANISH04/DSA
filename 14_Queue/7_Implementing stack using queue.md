
# 🏗️ Implementing Stack using Queues
### The Challenge: "Think Backwards"

A **Stack** wants the *newest* item to be removed first. But a **Queue** only lets you remove the *oldest* item. To solve this, we must do extra work during the "Push" operation to keep the newest item at the very front of the line.

---

## 1. 🖼️ The "Two Queues" Strategy
We use two queues:
1.  **Queue 1 ($q1$):** Our main storage.
2.  **Queue 2 ($q2$):** Our "holding area" (auxiliary).

### The Goal:
Every time we push a new item, we want it to end up at the **Front** of $q1$.

---

## 2. 🚶‍♂️ Step-by-Step Logic: The "Costly Push"

Suppose we already have `[10, 5, 15]` in our Stack (where 15 is at the front). Now we want to **Push(20)**.

| Step | Action | Visual State |
| :--- | :--- | :--- |
| **Start** | We have $q1$ with items. | $q1: [15, 5, 10]$, $q2: []$ |
| **Step 1** | Move **all** items from $q1$ to $q2$. | $q1: []$, $q2: [15, 5, 10]$ |
| **Step 2** | Enqueue the **New Item** (20) into $q1$. | $q1: [20]$, $q2: [15, 5, 10]$ |
| **Step 3** | Move everything **back** from $q2$ to $q1$. | $q1: [20, 15, 5, 10]$, $q2: []$ |

**Result:** 20 is now at the **Front**! When we call `pop()`, the Queue gives us 20 first. Success! 🎉

---

## 💻 3. The Implementation (C++ / Java Logic)

Since we made the **Push** operation do all the heavy lifting, the other functions become incredibly simple.

```cpp
class MyStack {
    queue<int> q1, q2;

public:
    // 📥 Push: O(N) - This is the "Costly" part
    void push(int x) {
        // 1. Move all from q1 to q2
        while (!q1.empty()) {
            q2.push(q1.front());
            q1.pop();
        }
        // 2. Put new item in q1
        q1.push(x);
        // 3. Move everything back to q1
        while (!q2.empty()) {
            q1.push(q2.front());
            q2.pop();
        }
    }

    // 📤 Pop: O(1) - Super fast!
    void pop() {
        q1.pop();
    }

    // 👀 Top: O(1)
    int top() {
        return q1.front();
    }
};
```

---

## 📊 4. Complexity Analysis

| Operation | Time Complexity | Why? |
| :--- | :--- | :--- |
| **Push** | **$O(N)$** | We move every element twice! |
| **Pop** | **$O(1)$** | We just remove the front element. |
| **Top** | **$O(1)$** | We just look at the front element. |

---

## 💡 5. Teacher's Homework Challenges
The video mentioned three more variations that often come up in interviews. Can you solve them?

1.  **Costly Pop:** Make the `push` operation fast ($O(1)$) by just adding to the queue, but make the `pop` operation do the heavy lifting. (Hint: You'll have to move all but the last item to the other queue).
2.  **The One-Queue Trick:** Can you implement a stack using only **ONE** queue? (Hint: After you push a new item, find the size $N$, and "rotate" the queue by popping and re-pushing items $N-1$ times).
3.  **The Reverse Problem:** Implement a **Queue using Stacks**. (This is a very common Google/Amazon question!)

---

## 📝 Summary Diagram

```text
PUSH(X) Algorithm:
1. q1 -> q2  (Empty out storage)
2. New X -> q1 (Newest goes to front)
3. q2 -> q1  (Rest of the line follows)

Final Stack Order in Queue:
[ NEWEST | ... | ... | OLDEST ]
```

**You are doing amazing!** You just learned how to "adapt" one data structure into another. This is a core skill in System Design. Ready for the next challenge? 🚀🖥️