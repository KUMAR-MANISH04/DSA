# Key Takeaways

- Use binary search on the answer (value range), not indices.
- For each mid, count how many elements ≤ mid.
- Counting can be done by binary searching each row (safe) or by a top-right walk (if columns are sorted too).
- Median position: (R × C + 1) / 2.
- Time/space trade-offs: naive uses extra memory; efficient uses O(1) extra space and reduces time by avoiding full sort.
- For interview: mention both methods and justify chosen counting implementation.
