#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int taylor(int x, int n) {
	static double p;
	static double f;
	double r;
	if (n == 0) {
		return 1;
	}

	else {
		r = taylor(x, n - 1);
		p = p * x;
		f = f * n;
		return r + p / f;
	}
}

int main() {
	cout << taylor(2, 10) << '\n';
	return 0;
}
