#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int *p; // declare a pointer variable
	p = new int[5]; // declare an array of integers, size 5 in heap;

	for (int i = 0; i < 5; i++) {
		cout << p[i] << '\n';
	}

	for (int j = 0; j < 5; j++) {
		cout << &p[j] << '\n';
	}

	cout << "deleting heap memory " << '\n';
	delete p;
	p = NULL;
	cout << p << '\n';
	for (int i = 0; i < 5; i++) {
		cout << p[i] << '\n';
	}
	return 0;

}	

