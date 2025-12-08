# 6. COMPLETE EXAMPLES

Example 1: 2×3 Matrix

```java
int[][] matrix = {
    {1, 2, 3},
    {4, 5, 6}
};

spiralTraversal(matrix);
```

Trace:
Initial: top=0, bottom=1, left=0, right=2

Iteration 1:
  Step 1 - Top (0, 0-2): 1, 2, 3 → top=1
  Step 2 - Right (1-1, 2): 6 → right=1
  Step 3 - Bottom (1, 1-0): 5, 4 → bottom=0
  Step 4 - Left (0-1, 0): Check fails (0 > 0)

Output: `1 2 3 6 5 4`

Example 2: 3×1 Matrix (Single Column)

```java
int[][] matrix = {
    {1},
    {2},
    {3}
};

spiralTraversal(matrix);

// Output: 1 2 3
```

Example 3: 1×4 Matrix (Single Row)

```java
int[][] matrix = {{1, 2, 3, 4}};

spiralTraversal(matrix);

// Output: 1 2 3 4
```

Example 4: 3×3 Matrix

```java
int[][] matrix = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};

spiralTraversal(matrix);

// Output: 1 2 3 6 9 8 7 4 5
```
