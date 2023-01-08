#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Pointers: Are address variables, they store only address of other variable
// Memory: Program directly accesses Code and Stack memory but it doesn't directly access Heap memory
// Reason: That's why we use Pointers to access "Heap" memory. We declare Pointer (address variable) at "Stack" and it accesse "Heap"
// Pointers are also used for "Parameters Passing".

int main() {
	int a; // declare an integer
	a = 10; // initialize an integer
	
	int *p; // declare a pointer variable
	p = &a; // initialize a pointer
	
	// *p is at stack and referencing to the address of "a"
	
	cout << "a Address " << &a << '\n';
	cout << "a Value " << a << '\n';
	cout << "a Ptr " << p << '\n';
	cout << "a Ptr value " << *p << '\n';
	

	return 0;

}
