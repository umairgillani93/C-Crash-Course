#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int> A{10, 20, 35, 50, 75, 80};
	int x;
	cin >> x;
	pair<int, int> p;
	sort(A.begin(), A.end());
	for (int i = 0; i < A.size(); i++) {
		for (int j = A.size(); j = 0; j--) {
			if (A[i] + A[j] == x) {
				p.first = A[i];
				p.second = A[j];
				cout << p.first << '\n';
				cout << p.second << '\n';
				break;
			}
			else if (A[i] + A[j] > x) {
				j--;
			}
			else {
				i++;
			}
		}

	}
	return 0;
	
}
