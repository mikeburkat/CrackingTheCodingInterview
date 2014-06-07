package chapter1;

import java.util.ArrayList;

public class Q7 {

	public int[][] createMatrix(int m, int n) {
		int[][] matrix = new int[m][n];

		int count = 1;
		for (int x = 0; x < m; x++) {
			for (int y = 0; y < n; y++) {
				matrix[x][y] = count++;
			}
		}

		return matrix;
	}

	public void printMatrix(int[][] matrix) {

		int m = matrix.length;
		int n = matrix[0].length;

		StringBuilder s = new StringBuilder();
		for (int x = 0; x < m; x++) {
			for (int y = 0; y < n; y++) {
				s.append(matrix[x][y]);
				s.append(", ");
			}
			s.append('\n');
		}
		System.out.println(s.toString());
	}

	public ArrayList findZeros(int[][] matrix) {
		ArrayList<Integer> list = new ArrayList<Integer>();

		int m = matrix.length;
		int n = matrix[0].length;
		for (int x = 0; x < m; x++) {
			for (int y = 0; y < n; y++) {
				if (matrix[x][y] == 0) {
					list.add(x);
					list.add(y);
				}
			}
		}
		return list;
	}

	public void setZeroOnRow(int[][] matrix, int row) {
		int n = matrix[row].length;
		for (int y = 0; y < n; y++) {
			matrix[row][y] = 0;
		}
	}

	public void setZeroOnColumn(int[][] matrix, int col) {
		int m = matrix.length;
		for (int x = 0; x < m; x++) {
			matrix[x][col] = 0;
		}
	}

	public void setZeros(int[][] matrix, ArrayList list) {

		while (!list.isEmpty()) {
			setZeroOnRow(matrix, (int) list.remove(0));
			setZeroOnColumn(matrix, (int) list.remove(0));
		}
	}

	public static void main(String[] args) {
		Q7 test = new Q7();

		int[][] matrix = test.createMatrix(3, 4);

		matrix[1][1] = 0;
		matrix[2][3] = 0;
		test.printMatrix(matrix);
		
		test.setZeros(matrix, test.findZeros(matrix));
		test.printMatrix(matrix);
		
	}
}
