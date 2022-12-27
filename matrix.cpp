#include <bits/stdc++.h>
using namespace std;

int main() {
	int num = 0;
	int row;
	int col;
	row = 5;
	col = 5;
	vector<vector<int>> vec;
	for (int i = 0; i < row; i++) {
		vector<int> v1;
		for (int j = 0; j < col; j++) {
			v1.push_back(num);
			num += 5;
		}

		vec.push_back(v1);
	}

	for (int i = 0; i < vec.size(); i++) {
		for (int j = 0; j < vec[i].size(); j++) {
			cout << vec[i][j] << '\n';
		}
	}
	return 0;

}
