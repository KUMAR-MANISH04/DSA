import bisect

def count_less_or_equal(matrix, x):
    count = 0
    for row in matrix:
        count += bisect.bisect_right(row, x)
    return count

def find_median(matrix):
    R = len(matrix)
    C = len(matrix[0])
    low = matrix[0][0]
    high = matrix[R-1][C-1]
    needed = (R * C + 1) // 2
    while low < high:
        mid = (low + high) // 2
        cnt = count_less_or_equal(matrix, mid)
        if cnt < needed:
            low = mid + 1
        else:
            high = mid
    return low

if __name__ == '__main__':
    matrix = [
        [1,3,5],
        [2,4,6],
        [7,8,9]
    ]
    print('Median:', find_median(matrix))
