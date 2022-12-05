#include <bits/stdc++.h>
using namespace std;

int ls(vector<int> v, int n) {
	int i = 0;
	while (i < v.size()) {
		if (v[i] == n) {
			//cout << "found at index " << i << '\n';
			return i;
		}
		else {
			i++;
		}
	} 

	return 0;
}

int main() {
	// linear search implementation
	// takes two items; an array and number
	// returns the index of number; if present in given array
	int size;
	int n;
	cin >> size;
	vector<int> v;

	for (int i = 0; i < size; i++) {
		cin >> n;
		v.push_back(n);
	}

	//for (int j = 0; j < size; j++) {
	//	cout << v[j] << '\n';
	//}

	cout << ls(v, n) << '\n';

}
