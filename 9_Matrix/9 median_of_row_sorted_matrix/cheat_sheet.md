# Cheat Sheet — Median of Row-wise Sorted Matrix

- Problem: find median of R×C matrix where each row is sorted (left→right)
- Naive: collect all elements, sort, pick middle → O(RC log(RC)), O(RC) space
- Efficient: binary search on value range
  - low = min element, high = max element
  - while low < high:
      mid = (low + high) / 2
      cnt = countLessOrEqual(matrix, mid)
      if cnt < needed → low = mid + 1
      else high = mid
  - return low
- Counting ways:
  - per-row binary search (bisect / upper_bound): O(R log C)
  - top-right walk: O(R + C) (only when columns are also sorted)
- Needed = (R×C + 1) / 2
- Complexity (safe): O(log(max) × R log C)
- Space: O(1)
