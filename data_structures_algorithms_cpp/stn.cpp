#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int sum_til_n(int n) {
	
	if (n == 1) {
		return n;
	}	

	else {
		return n + sum_til_n(n - 1);
	}
}

int main() {
	int x;
	cin >> x;
	cout << sum_til_n(x) << '\n';

	return 0;
}
