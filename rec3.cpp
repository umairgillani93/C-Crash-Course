#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int foo(int &x, int c) {
	c--;
	if (c == 0) {
		return 1;
	}

	else {
		x++;
		return foo(x, c) * x;
	}
}

int main() {
	int p = 5;
	cout << foo(p, p) << '\n';
	return 0;
}
