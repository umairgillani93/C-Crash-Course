#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int> v{10, 20, 35, 50, 75, 80};
	int x;
	cin >> x;
	vector<pair<int, int>> new_v;
	for (int i = 0; i < v.size(); i++) {
		for (int j = v.size() -1; v > 0; j++) {
			if (v[i] + v[j] == x) {
				new_v.push_back(make_pair<i, j>);
			}
			else if (v[i] + v[j] > x) {
				j--;
			}
			else {
				i--;
			}
		}
	
	}
	cout << new_v[0][0] << '\n';
	return 0;
	
}
