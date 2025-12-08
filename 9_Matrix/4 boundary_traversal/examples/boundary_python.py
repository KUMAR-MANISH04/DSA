def boundary_traversal(matrix):
    R = len(matrix)
    if R == 0:
        print(); return
    C = len(matrix[0])

    if R == 1:
        for j in range(C): print(matrix[0][j], end=' ')
        print(); return
    if C == 1:
        for i in range(R): print(matrix[i][0], end=' ')
        print(); return

    for j in range(C): print(matrix[0][j], end=' ')
    for i in range(1, R): print(matrix[i][C-1], end=' ')
    for j in range(C-2, -1, -1): print(matrix[R-1][j], end=' ')
    for i in range(R-2, 0, -1): print(matrix[i][0], end=' ')
    print()

if __name__ == '__main__':
    matrix = [
        [1,2,3,4],
        [5,6,7,8],
        [9,10,11,12],
        [13,14,15,16]
    ]
    print('Boundary Traversal: ', end='')
    boundary_traversal(matrix)
