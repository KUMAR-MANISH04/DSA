package rotation.examples;

public class rotate_java {
    static void transpose(int[][] matrix) {
        int n = matrix.length;
        for (int i = 0; i < n; i++)
            for (int j = i + 1; j < n; j++) {
                int tmp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = tmp;
            }
    }

    static void reverseColumns(int[][] matrix) {
        int n = matrix.length;
        for (int j = 0; j < n; j++) {
            int low = 0, high = n - 1;
            while (low < high) {
                int tmp = matrix[low][j];
                matrix[low][j] = matrix[high][j];
                matrix[high][j] = tmp;
                low++; high--;
            }
        }
    }

    static void rotateInPlace(int[][] matrix) {
        transpose(matrix);
        reverseColumns(matrix);
    }

    static void printMatrix(int[][] matrix) {
        for (int i = 0; i < matrix.length; i++) {
            for (int j = 0; j < matrix[i].length; j++) System.out.print(matrix[i][j] + " ");
            System.out.println();
        }
    }

    public static void main(String[] args) {
        int[][] matrix = {
            {1,2,3},
            {4,5,6},
            {7,8,9}
        };
        System.out.println("Original Matrix:");
        printMatrix(matrix);
        rotateInPlace(matrix);
        System.out.println("\nRotated 90° Anti-Clockwise:");
        printMatrix(matrix);
    }
}
