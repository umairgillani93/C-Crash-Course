#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int fun(int n) {
	int x = 1;
	if (n == 1) {
		return x;
	}

	else {
		for (int k = 1; k < n; k++) {
			x = x + fun(k) * fun(n - k);
		}

		return x;
	}
}

int main() {
	cout << fun(5) << '\n';
	return 0;
}
