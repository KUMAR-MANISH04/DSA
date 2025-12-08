# 10. CACHE FRIENDLINESS ANALYSIS

Static 2D Array (Best Cache Performance)

Memory Layout:
```
[10][20][30][40][50][60]  ← All contiguous
Address: 2000→2004→2008→2012→2016→2020
```

Result: CPU caches entire row at once → NO CACHE MISS

Dynamic Methods (Scattered Memory)

Memory Layout:
```
Row 0 → 3000, 3004  (allocated separately)
Row 1 → 5000, 5004  (allocated separately)
Row 2 → 7000, 7004  (allocated separately)
```

Result: Rows in different memory locations → MANY CACHE MISSES

Performance Impact
- Static Array: Extremely fast cache hits
- Double Pointer/Array of Pointers: Row data may miss cache
- Vector of Vectors: Better organization but still scattered
- Cache Miss Cost: Accesses can be 10–100× slower depending on workload
