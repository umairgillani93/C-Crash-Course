#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int new_taylor(int x, int n) {
	int result;
	if (n == 0) {
		return 1;
	}

	else {
		result += new_taylor(x, n - 1);
		
	}

	return result += new_taylor(x, n);
}



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
	cout << new_taylor(1, 10) << '\n';
	return 0;
}
