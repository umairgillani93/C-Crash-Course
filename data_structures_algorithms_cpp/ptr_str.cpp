#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Rectangle {
	int len;
	int breath;

};

int main() {
	struct Rectangle r;
	r.len = 10;
	r.breath = 20;
	cout << r.len << '\n';
	cout << r.breath << '\n';

	Rectangle *p = &r;
	cout << p->len << '\n';
	cout << p->breath << '\n';

	p->len = 100;
	p-> breath = 200;

	cout << p->len << '\n';
	cout << p->breath << '\n';
	struct Rectangle *p_new = new Rectangle;

	cout << "pointer create at Heap" << '\n';
	
	

	return 0;

}

