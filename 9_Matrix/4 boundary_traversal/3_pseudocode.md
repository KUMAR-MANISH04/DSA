# 3. PSEUDOCODE

Input: Matrix of size R × C

// Step 1: Print First Row
for j = 0 to C-1:
    print matrix[0][j]

// Step 2: Print Last Column
for i = 1 to R-1:
    print matrix[i][C-1]

// Step 3: Print Last Row (if R > 1)
if R > 1:
    for j = C-2 down to 0:
        print matrix[R-1][j]

// Step 4: Print First Column (if C > 1)
if C > 1:
    for i = R-2 down to 1:
        print matrix[i][0]
