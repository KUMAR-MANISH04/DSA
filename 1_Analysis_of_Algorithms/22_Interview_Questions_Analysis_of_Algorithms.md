# 🎯 Analysis of Algorithms - Interview Questions & Answers

[⬅️ Back to Table of Contents](Table%20Of%20Contents.md)

These questions cover the critical aspects interviewers probe to verify you understand the mathematical realities backing code execution.

### Q1. Can an algorithm have an $O(N^2)$ worst-case and a better average-case? Give an example.
**A:** Absolutely. **QuickSort** is the most famous example. The pivot strategy in QuickSort has a $O(N^2)$ worst-case upper bound (e.g., if the array is already sorted and the pivot is chosen naively). However, mathematically, the probability of selecting terrible pivots repeatedly is exceptionally low, resulting in an overwhelming **average-case scenario of $O(N \log N)$**. Because constants matter in the real world, QuickSort's $O(N \log N)$ average operates blazingly fast in physical hardware.

---

### Q2. Does Big-O uniquely refer to Worst-Case Analysis? 
**A:** No, this is a very common misconception. **Big-O** is purely a mathematical "Upper Bound". We can calculate the Big-O bound of an algorithm's Best-Case scenario. However, colloquially and within the interview room, if an interviewer asks "What is the Big-O of this code?", they are conventionally asking for the Upper Bound of the Worst-Case execution.

---

### Q3. Why do we drop constants (like changing $O(3N)$ to $O(N)$)?
**A:** We drop constants because Asymptotic Analysis evaluates the *rate of growth* mathematically as $N \to \infty$, completely independent of the hardware or language running the script. A constant multiplier implies the execution time varies rigidly depending on clock speed and CPU cycles. We don't care about a "flat scaling curve"; we care exclusively about the highest degree term ($N, N^2, \log N, 2^N$) which will absolutely shatter any hardware resources if grown large enough.

---

### Q4. If I create no new arrays or lists, is my Space Complexity dynamically $O(1)$?
**A:** **Not always.** Space complexity must strictly factor in **Call Stack Frames**. If the algorithm is recursive, each subsequent call adds a layer retaining local parameters, return addresses, and variables entirely in auxiliary space. A recursive traversal to a depth of $N$ dynamically consumes $O(N)$ Auxiliary Space, fundamentally the exact same penalty as creating an $N$-length physical array!

---

### Q5. Differentiate $O$, $\Omega$, and $\Theta$ notation in a single sentence each.
**A:** 
1. **$O$ (Big-O)** determines the maximum mathematical ceiling (Will not exceed).
2. **$\Omega$ (Omega)** determines the minimum mathematical floor (Will take at least this much).
3. **$\Theta$ (Theta)** determines tight sandwiching where the ceiling and floor match the *exact same* growth boundary.
