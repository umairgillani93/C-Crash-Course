#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int pascal_combs(int n, int r) {
	if (r == 0 || n == r) {
		return 1;
	}
	
	else {
		return pascal_combs(n - 1, r -1) + pascal_combs(n - 1, r); 
	}
}

int fact(int n) {
	if (n == 0 || n == 1) {
		return 1;
	}

	else {
		return n * fact(n - 1);
	}
}

int C(int n, int r) {
	if (n == 1) {
		return 1;
	}

	else {
		
		int t1;
		int t2; 
		int t3;

		t1 = fact(n);
		t2 = fact(r);
		t3 = fact(n - r);

		return t1 / (t2 + t3);
	}

}

int main() {
	int n, r;
	cin >> n >> r;
	cout << pascal_combs(n, r) << '\n';
	return 0;
}

