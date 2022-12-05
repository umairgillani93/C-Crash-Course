#include <bits/stdc++.h>
using namespace std;


int main() {
	// linear search implementation
	// takes two items; an array and number
	// returns the index of number; if present in given array
	// lets take the array and number from user initially
	//

	int size, numb;
	int n;
	cin >> n;
	vector<int> v;
	cin >> size;

	for (int i = 0; i < size; i++) {
		cin >> numb;
		v.push_back(numb);
	}

	for (int j = 0; j < size; j++) {
		cout << v[j] << " ";
	}

	int i = 0;
	while (i < v.size()) {
		if (v[i] == n) {
			cout << "index of item is " << i << "\n";
			return i;
		}
		else {
			++i;
		}
	}

	return 0;
	
}	
