#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void swap(int &x, int &y) {
	// swap two given integers
	int z;
	z = x;
	x = y;
	y = z;

}

int main() {
	int n;
	cin >> n;
	vector<int> A(n);

	for (int i = 0; i < n; i++) {
		cin >> A[i];	
	}

	// swapping logic starts here
	for (int i = 0; i < A.size(); i++) {
		for (int j = 0; j < A.size() - 1; j++) {
			if (A[j] > A[j + 1]) {
				swap(A[j], A[j + 1]);
			}

			else {
				continue;
			}

		}
	}


	// print out the result vector
	for (int i = 0; i < A.size(); i++) {
		cout << A[i] << '\n';
	}
	
	return 0;
	
}
