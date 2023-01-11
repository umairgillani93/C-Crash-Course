#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int * fun(int n) {
	// create a pointer function and pass an interger by value
	int *p; // declare a pointer
	p = new int[5]; // initialize a pointer at heap memory
	return p; // return this pointer
}	

int main() {
	int *A; // declare a pointer to store array pointer at 
	A = fun(5); // initialize the pointer

	for (int i = 0; i < 5; i++) { // loop till size n
		cout << A[i] << '\n';
	}
	
	A[0] = 25; // access the index and change the value

	cout << A[0] << '\n'; // print new value at index 0th

	return 0;
}
