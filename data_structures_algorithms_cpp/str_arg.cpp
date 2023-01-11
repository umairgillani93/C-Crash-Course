#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Rectangle {
	int len;
	int breath;
};


int area(struct Rectangle r) {
	return r.len * r.breath;
}


int main() {

	struct Rectangle r1 {10, 15};
	cout << area(r1) << '\n';
	return 0;

}
