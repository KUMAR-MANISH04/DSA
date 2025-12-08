package boundary_traversal.examples;

public class boundary_java {
    static void boundaryTraversal(int[][] matrix) {
        int R = matrix.length;
        int C = matrix[0].length;
        if (R == 1) {
            for (int j = 0; j < C; j++) System.out.print(matrix[0][j] + " ");
            System.out.println(); return;
        }
        if (C == 1) {
            for (int i = 0; i < R; i++) System.out.print(matrix[i][0] + " ");
            System.out.println(); return;
        }
        for (int j = 0; j < C; j++) System.out.print(matrix[0][j] + " ");
        for (int i = 1; i < R; i++) System.out.print(matrix[i][C-1] + " ");
        for (int j = C-2; j >= 0; j--) System.out.print(matrix[R-1][j] + " ");
        for (int i = R-2; i >= 1; i--) System.out.print(matrix[i][0] + " ");
        System.out.println();
    }

    public static void main(String[] args) {
        int[][] matrix = {
            {1,2,3,4},
            {5,6,7,8},
            {9,10,11,12},
            {13,14,15,16}
        };
        System.out.print("Boundary Traversal: ");
        boundaryTraversal(matrix);
    }
}
