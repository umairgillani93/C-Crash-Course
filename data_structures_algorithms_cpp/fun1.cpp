#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int * arr(int n) {
	int *p;
	p = new int[n];
	return p;
}

// Array pointers
int * arr_new(int n) {
	int *p;
	p = new int[n];
	return p;
}	


void fun(int A[], int n) {
	for (int i = 0; i < n; i++) {
		cout << A[i] << '\n';
	}
}

int main() {
	int *A;
	A = arr(5);
	A[0] = 10;
	cout << sizeof(A) << '\n';
	cout << A << '\n';
	for (int i = 0; i < 5; i++) {
		cout << A[i] << '\n';
	}

	return 0;
}
