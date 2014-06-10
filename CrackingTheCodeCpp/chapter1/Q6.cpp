/*
 * Q6.cpp
 *
 *  Created on: Jun 7, 2014
 *      Author: mike
 */

#include <iostream>
#include <iomanip>
using namespace std;


int** rotateMatrixBy90(int** matrix, int n) {

	int rotated[n][n];

	int newX;
	int newY;
	for (int x = 0; x < n; x++) {
		for (int y = 0; y < n; y++) {
			newX = n - x - 1;
			newY = n - y - 1;
			rotated[newY][newX] = matrix[x][y];
		}
	}

	for (int x = 0; x < n; x++) {
		for (int y = 0; y < n; y++) {
			int newX = n - x - 1;
			matrix[newX][y] = rotated[x][y];
		}
	}

	return matrix;
}

int** createMatrix(const int n) {

	int** matrix = new int*[n];
	for (int x = 0; x < n; x++) {
		matrix[x] = new int[n];
	}

	int value = 1;
	for (int x = 0; x < n; x++) {
		for (int y = 0; y < n; y++) {
			matrix[x][y] = value++;
		}
	}

	return matrix;
}

void print(int** matrix, int n) {
	for (int x = 0; x < n; x++) {
		for (int y = 0; y < n; y++) {
			cout << matrix[x][y] << ", ";
		}
		cout << endl;
	}
}

//int main(void) {
//
//	cout << "Enter Size: ";
//	int n;
//	cin >> n;
//	int** matrix = createMatrix(n);
//
//	print(matrix, n);
//
//	matrix = rotateMatrixBy90(matrix, n);
//
//	cout << setw(3*n) << setfill('=') << '=' << endl;
//
//	print(matrix, n);
//
//	return 0;
//}

