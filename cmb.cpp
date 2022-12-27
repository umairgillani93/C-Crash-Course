#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> combs() {
	int n;
	cin >> n;
	vector<vector<int>> outer;
	for (int i = 0; i < n; i++) {
		vector<int> inner;
		for (int j = 0; j < n; j++) {
			if (i + j == n) {
				inner.push_back(i);
				inner.push_back(j);
			}	
			else {continue;}
		}
		outer.push_back(inner);
	}
	//for (int i = 0; i < outer.size(); i++){
	//	for (int j = 0; j < outer[i].size(); j++) {
	//		cout << outer[i][j] << " ";

	//	}
	//	cout << endl;
	//}
	return outer;
	
}

int main() {
	vector<vector<int>> o;
	o = combs();

	for (int i = 0; i < o.size(); i++) {
		for (int j = 0; j < o[i].size(); j++) {
			cout << o[i][j] << '\n';

		}
	}

}
