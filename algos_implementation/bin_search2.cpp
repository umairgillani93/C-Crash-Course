#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
	// we have a sorted Array
	// we find the mid-point of a sorted Array
	// a = 0;
	// b = size - 1;
	// while (a <= b);
	// mid = (a + b) / 2;
	// check at A[k] == x;
	// if yes return result
	// if not check if A[k] > x or A[k] < x
	// if greater the Array becomes as below
	// ----
	// A = {1, 2, 3, 4, 5, 6};
	// k = (0 + 5) / 2 = 2
	// check if A[k] == x
	// if yes return "yes found at index : idx"
	// if not check if A[k] > x
	// if yes that means 'x' is in the left half
	// e.g {1, 2, 3, 4, 5, 6} -> A[k] > x; 'x' lies in {1, 2, 3, 4}
	// now we have to search the left half
	// so we'll have to bring the 'b' pointer to k - 1
	// b = k - 1;
	/* else we'll have to bring the a pointer to k + 1 and search in right half */
	int  x;
	cin >> x;
	vector<int> A{1, 2, 3, 4, 5, 6};
	int n = A.size() - 1;
	int a = 0;
	int b = n - 1;
	// find the mid point

	while (a <= b) {
		int k = (a + b) / 2;
		if (A[k] == x) {
			cout << "item found at index: " << k << '\n';
			break;
		}

		if (A[k] > x) {
			b = k - 1; // ...
		}

		else {
			a = k + 1;
		}	
	}
	return 0;
}
