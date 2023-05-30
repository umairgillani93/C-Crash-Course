#include <bits/stdc++.h>
using namespace std;

int fibon(int n) {
	
	if (n <= 1) {
		return n;
	}

	else {
		return fibon(n - 1) + fibon(n - 2);
	}
	
}

int main() {
	int n;
	cin >> n;
	vector<int> v(n);

	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	
	for (int i = 0; i < n; i++) {
		cout << fibon(v[i]) << '\n';
	}

	return 0;
}


// n = 5
// if n <= 1;
// return n;
// else return (n - 1) + (n - 2) = 4 + 3 = 7

