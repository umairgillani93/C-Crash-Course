#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void rec(int n) {
	if (n > 0) {
		cout << n << '\n';
		rec(n - 1);
	}
}


int main() {
	int n = 10;
	rec(10);
	return 0;
}
