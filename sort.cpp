#include <iostream>
#include <vector>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<string> V{"a", "d", "b"};
	for (int i = 0; i < V.size(); i++) {
		cout << V[i] << '\n';
	}

	sort(V.begin(), V.end());

	cout << "Sorted vector is " << '\n';

	for (int j = 0; j < V.size(); j++) {
		cout << V[j] << '\n';
	}

	return 0;
}
