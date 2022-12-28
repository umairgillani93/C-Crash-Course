#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> combs(){
	int row;
	int col;
	cin >> row;
	cin >> col;
	vector<vector<int>> outer;

	for (int i = 0; i < row; i++) {
		vector<int> inner;
		for (int j = 0; j < col; j++) {
			inner.push_back(j * 10);
		}

		outer.push_back(inner);
	}
	return outer;
}	

int main() {
	vector<vector<int>> data;
	data = combs();
	cout << "combs initiated" << '\n';

	for (int i = 0; i < data.size(); i++) {
		for (int j = 0; j < data[i].size(); j++){
			cout << data[i][j] << '\n'; 
	
		cout << std::endl;
	}
	}

	return 0;


}
