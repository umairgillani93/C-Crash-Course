#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Rectangle {
	// define structure
	int len;
	int breath;
};

void initialize(struct Rectangle *r, int l, int b) {
	// modify structure so pass argument by address
	r->len = l;
	r->breath = b;
}

int area(struct Rectangle r) {
	// return the product, so pass args by value; creates a separate copy object
	return r.len * r.breath;
}

void change_len(struct Rectangle *r, int l) {
	// modify the actual params, so need to pass args by address and access the args throught pointers
	r->len = l;

}
int main() {
	// call all the functions
	// typical C/C++ style coding on structure we created all the functions!!!
	struct Rectangle r;
	initialize(&r, 5, 10);
	area(r);
	change_len(&r, 20);

}
