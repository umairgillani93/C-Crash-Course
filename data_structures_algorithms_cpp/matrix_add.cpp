#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<vector<int>> matrix;

	int row = 2;
	int col = 3;

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			matrix[i][j] = 0;
		}
	}
	cout << matrix[1][2] << '\n';
	return 0;
}
