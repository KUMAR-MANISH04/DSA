# 2. CORE CONCEPT: "ONION PEELING"

Visual Layer Approach

Layer 1 (Outer):
```
1  2  3  4
5     6  8
9     7 12
13 14 15 16
```

Layer 2 (Inner):
```
   6  7
   10 11
```

Layer 3 (Core):
```
   11
```

Process

1. Print outer layer (all 4 sides)
2. Remove outer layer (adjust boundaries)
3. Print next inner layer
4. Repeat until all elements printed
