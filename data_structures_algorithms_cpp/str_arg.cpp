#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Rectangle {
	int len;
	int breath;
};

int area_add(struct Rectanble *r) {
	int *len;
	int *breath;

	return *r1.len * *r1.breath;
}

int area(struct Rectangle r) {
	return r.len * r.breath;
}

int area_ref(struct Rectanble &r) {
	// passing argument by reference doesn't create a new object
	// instead it makes changes to actual paramters
	
	return r.len * r.breath;
}


int main() {

	struct Rectangle r1 {10, 15};
	cout << area(r1) << '\n'; // actual paramters are not changed
	cout << area_ref(r1) << '\n'; // actual paramters are changed
	cout << area_add(r1) << '\n';
	return 0;

}
