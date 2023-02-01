#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int f(int n) {
	static int i = 1;
	if (n >= 5) {
		return n;
	}

	else {
		n += i;
		i++;

		return f(n);
	}
}	

int main() {
	cout << f(1) << '\n';
	return 0;
}
