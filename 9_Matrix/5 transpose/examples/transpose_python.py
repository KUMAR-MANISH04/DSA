def transpose_in_place(matrix):
    n = len(matrix)
    for i in range(n):
        for j in range(i+1, n):
            matrix[i][j], matrix[j][i] = matrix[j][i], matrix[i][j]

def print_matrix(matrix):
    for row in matrix:
        print(' '.join(map(str, row)))

if __name__ == '__main__':
    matrix = [
        [1,2,3,4],
        [5,6,7,8],
        [9,10,11,12],
        [13,14,15,16]
    ]
    print('Original Matrix:')
    print_matrix(matrix)
    transpose_in_place(matrix)
    print('\nTransposed Matrix:')
    print_matrix(matrix)
