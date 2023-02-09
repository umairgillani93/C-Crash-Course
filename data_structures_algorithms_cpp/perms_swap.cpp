#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void swap(int &x, int &y) {
	int temp;
	temp = x;
	x = y;
	y = temp;
}

void perm(string &s, int lo, int hi) {
	if (lo == hi) {
		cout << s << '\n';
	}

	else {
		for (int i = lo; i <= hi; i++) {
			swap(s[lo], s[i]);
			perm(s, lo + 1, hi);
			swap(s[lo], s[i]);
		}
	}
}

int main() {
	string s = "ABC";
	int lo = 0;
	int hi = s.size();

	perm(s, lo, hi);
	
	return 0;
}
