#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int *p = new int[5];
	// change the  size of p = 5 to p = 10
	
	int *q = new int[10];

	for (int i = 0; i < 5; i++) {
		q[i] = p[i];
	}

	p = q;
	delete []p;
	q = NULL;

	for (int j = 0; j < 10; j++) {
		cout << p[j] << '\n';
	}

	return 0;
}
