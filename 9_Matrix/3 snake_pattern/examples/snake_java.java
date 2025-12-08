package snake_pattern.examples;

import java.util.*;

public class snake_java {
    // Print inline
    static void printSnakePattern(int[][] matrix) {
        int R = matrix.length;
        int C = matrix[0].length;
        for (int i = 0; i < R; i++) {
            if (i % 2 == 0) {
                for (int j = 0; j < C; j++) System.out.print(matrix[i][j] + " ");
            } else {
                for (int j = C - 1; j >= 0; j--) System.out.print(matrix[i][j] + " ");
            }
        }
        System.out.println();
    }

    // Return as list
    static List<Integer> snakeList(int[][] matrix) {
        List<Integer> result = new ArrayList<>();
        int R = matrix.length;
        int C = matrix[0].length;
        for (int i = 0; i < R; i++) {
            if (i % 2 == 0) {
                for (int j = 0; j < C; j++) result.add(matrix[i][j]);
            } else {
                for (int j = C - 1; j >= 0; j--) result.add(matrix[i][j]);
            }
        }
        return result;
    }

    public static void main(String[] args) {
        int[][] matrix = {
            {1,2,3,4},
            {5,6,7,8},
            {9,10,11,12},
            {13,14,15,16}
        };
        System.out.println("Snake Pattern Output:");
        printSnakePattern(matrix);

        System.out.println("As list: " + snakeList(matrix));
    }
}
