#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Rectangle {
	int len;
	int breath;
};

int main() {
	struct Rectangle r{10, 5};
	struct Rectangle *p = &r;

	(*p).len = 20;
	(*p).breath = 50;
	cout << r.len << '\n';
	cout << r.breath << '\n';

	p -> len = 100;
	p -> breath = 1000;

	cout << r.len << '\n';
	cout << r.breath << '\n';

	// creates a struct Rectangle on Heap
	struct Rectangle *p_new;
	p_new = new Rectangle;

	p -> len = 100;
	p -> breath = 1000;
	
	return 0;
}	
