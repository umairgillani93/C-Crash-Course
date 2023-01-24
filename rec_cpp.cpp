#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void some_func(int x) {
	if (x > 0) {
		cout << x << '\n';
		some_func(x - 1);
	}
}

int main() {
	int n = 10;
	some_func(n);
	return 0;

}
