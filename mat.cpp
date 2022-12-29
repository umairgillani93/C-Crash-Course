#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int row;
	int col;
	cout << "Enter row" << '\n';
	cin >> row;
	cout << "Enter col:" << '\n';
	cin >> col;
	vector<vector<int>> outer;

	for (int i = 0; i < row; i++) {
		vector<int> inner;
		for (int j = 0; j < col; j++) {
			inner.push_back(1);
		}
		outer.push_back(inner);
	}

	for (int i = 0; i < outer.size(); i++) {
		for (int j = 0; j < outer[0].size(); j++) {
			cout << outer[i][j] << " ";
		}
		cout << '\n';
	}
	return 0;
}
