#include <bits/stdc++.h>
using namespace std;

int main() {
	int row;
	int col;
	row = 3;
	col = 3;
	vector<vector<int>> outer;

	for (int i = 0; i < row; i++) {
		vector<int> inner;
		for (int j = 0; j < col; j++) {
			inner.push_back(0);
		}

		outer.push_back(inner);
	}

	for (int i = 0; i < outer.size(); i++) {
		for (int j = 0; j < outer[i].size(); j++) {
			cout << outer[i][j] << '\n';
		}
		cout << endl;
	}

	return 0;

}

