#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Rectangle {
	int length;
	int breath;
};

void initialize(struct Rectangle *r, int l, int b) {
	r -> length = l;
	r -> breath = b;
	cout << r -> length << '\n';
	cout << r -> breath << '\n';

}

int area (struct Rectangle r) {

	return r.length * r.breath;
}

void change_len(struct Rectangle *r, int l) {
	r -> length = l;
	cout << r -> length << '\n';
	cout << r -> breath << '\n';

}

int main() {
	struct Rectangle r;
	initialize(&r, 10, 5);
	area(r);
	change_len(&r, 50);
	return 0;
}

