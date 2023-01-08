#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// pass by value
// pass by address 
// pass by reference; c++
//
//

void swap_ref(int &x, int &y) {
	int temp;
	temp = x;
	x = y;
	y = temp;
}

void swap_add(int *x, int *y) {
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

void swap(int x, int y) {
	// passing by value doesn't change original parameters
	int temp;
	temp = x;
	x = y;
	y = temp;

}

int main() {
	int a, b;
	a = 10;
	b = 20;
	swap_ref(a, b); // original  function paramters
	printf("A: %d, B: %d", a, b);
	return 0;
		
}
