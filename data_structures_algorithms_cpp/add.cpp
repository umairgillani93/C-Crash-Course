#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int add(int *x, int *y) {
	int z;
	z = *x + *y;
	return z;
}

int main() {
	int a = 10;
	int b = 20;
	cout << add(&a, &b) << '\n';
	return 0;
}



