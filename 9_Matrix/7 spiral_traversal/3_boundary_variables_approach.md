# 3. BOUNDARY VARIABLES APPROACH

Four Boundary Variables

- top:    Current top row index
- bottom: Current bottom row index
- left:   Current left column index
- right:  Current right column index

For R×C matrix (R rows, C columns):
- Initial: top=0, bottom=R-1, left=0, right=C-1

Four Operations in Each Iteration

Operation 1: Print Top Row (Left → Right)
```
for j = left to right:
    print matrix[top][j]
then: top++
```

Operation 2: Print Right Column (Top → Bottom)
```
for i = top to bottom:
    print matrix[i][right]
then: right--
```

Operation 3: Print Bottom Row (Right → Left)
```
if (top <= bottom):  // Check if row exists
    for j = right down to left:
        print matrix[bottom][j]
    then: bottom--
```

Operation 4: Print Left Column (Bottom → Top)
```
if (left <= right):  // Check if column exists
    for i = bottom down to top:
        print matrix[i][left]
    then: left++
```
