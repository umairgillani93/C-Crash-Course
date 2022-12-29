#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int fact_rec(int n) {
	if (n == 0 || n == 1) {
		return 1;
	}
	else {
		return n * fact_rec(n -1);
	}
	return 0;
	
}
int fact_iter(int x) {
	int fact = 1;
	for (int i = 1; i <= x; i++) {
		fact = fact * i;
	}
	
	cout << fact << '\n';
	return 0;
}
int main() {
	int num;
	cin >> num;
	cout << fact_iter(num) << '\n';
	cout << fact_rec(num) << '\n';
	return 0;
}
