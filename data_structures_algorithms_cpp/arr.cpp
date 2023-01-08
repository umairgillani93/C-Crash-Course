// Array: collection of similar data types / structures, resides on continuous memory
// Syntax: int A[5]; -> declared Array of integers having size = 5 and indexes of Array start from 0th index to n-1, n = size of Array
// Memory: main memory is divided in 3 sections; Stack, Heap and Code section
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int size;
	cin >> size;
	
	int A[size];
	A[0] = 10;
	A[1] = 25;
	A[2] = 23;
	A[3] = 30;
	A[4] = 55;
	int B[5] = {1, 2, 3, 4, 5};

	for (int j = 0; j < sizeof(A)/ sizeof(A[0]); j++) {
		cout << A[j] << '\n';
	}
	return 0;


}
