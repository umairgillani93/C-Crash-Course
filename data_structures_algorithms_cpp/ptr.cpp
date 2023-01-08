#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Pointers: Are address variables, they store only address of other variable
// Memory: Program directly accesses Code and Stack memory but it doesn't directly access Heap memory
// Reason: That's why we use Pointers to access "Heap" memory. We declare Pointer (address variable) at "Stack" and it accesse "Heap"
// Pointers are also used for "Parameters Passing".

struct Rectangle {
	int len;
	int breath;
};

int main() {
	int a; // declare an integer
	a = 10; // initialize an integer
	
	int *p; // declare a pointer variable
	p = &a; // initialize a pointer
	
	// *p is at stack and referencing to the address of "a"
	
	//cout << "a Address " << &a << '\n';
	//cout << "a Value " << a << '\n';
	//cout << "a Ptr " << p << '\n';
	//cout << "a Ptr value " << *p << '\n';

	// allocate memory in Heap using pointers
	int *p_new; 
	p_new = new int[5]; // on heap
	// p_new[0] on stack, we can access from first index till all the size of pointers array at Heap

	cout << p_new << '\n';
	cout << *p_new << '\n';

	for (int i = 0; i < 5; i++) {
		cout << p_new[i] << '\n';
	}

	// Array pointers
	// For sequential datatypes when creating pointer we only assign the address of item at index 0.
	int A[5] = {1,2,3,4,5};
	int *ap;
	ap = &A[0];
	cout << *ap << '\n';
	cout << ap << '\n';

	for (int i = 0; i < 5; i++) {
		cout << p[i] << '\n';
	}
	
	// Another heap pointer example
	int *p_heap;
	p_heap = new int[3];
	
	// Assign values to the indexes
	p[0] = 5;
	p[1] = 10;
	p[2] = 11;

	for (int j = 0; j < 3; j++) {
		cout << p[j] << '\n';
	}
	// Delete space created on heap
	// delete [] p_heap;
	cout << "space deleted" << '\n';
	free(p_heap);

	for (int j = 0; j < 3; j++) {
		cout << p[j] << '\n';
	}

	// Every pointer takes same size on memory
	int *p1;
	char *p2;
	float *p3;
	double *p4;
	struct *p5;

	cout << sizeof(p1) << '\n';
	cout << sizeof(p2) << '\n';
	cout << sizeof(p3) << '\n';
	cout << sizeof(p4) << '\n';
	cout << sizeof(p5) << '\n';

	return 0;

}
