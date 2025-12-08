public class MatrixSearch {
    
    static void searchEfficient(int[][] matrix, int x) {
        int R = matrix.length;
        int C = matrix[0].length;
        int i = 0, j = C - 1;
        while (i < R && j >= 0) {
            if (matrix[i][j] == x) {
                System.out.println("Found at (" + i + ", " + j + ")");
                return;
            } else if (matrix[i][j] > x) {
                j--;
            } else {
                i++;
            }
        }
        System.out.println("Not found");
    }

    public static void main(String[] args) {
        int[][] matrix = {
            {10, 20, 30, 40},
            {15, 25, 35, 45},
            {27, 29, 37, 48},
            {32, 33, 39, 50}
        };

        System.out.println("Searching 29:");
        searchEfficient(matrix, 29);
        System.out.println("Searching 24:");
        searchEfficient(matrix, 24);
    }
}
