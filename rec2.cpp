#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int foo(int n, int sum) {
	int j = 0;
	int k = 0;
	if (n == 0) {
		return n;
	}

	else {
		k = n % 10; // takes the mode of n; if n == 13 then 13 % 10 = 3
		j = n / 10; // takes  quotient of n; if n == 13 then 13 / 10 =  1.3
		sum = sum + k;
		foo (j, sum);
		cout << k << '\n';
	}

	return 0;
}

int main() {
	int a = 2048;
	int sum = 0;
	cout << foo(a, sum) << '\n';
	return 0;
}
