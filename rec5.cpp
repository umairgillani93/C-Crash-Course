#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int count(int n) {
	static int d = 1;
	cout << n << '\n';
	cout << d << '\n';
	d++;
	
	if (n > 1) {count(n - 1);}
		
	else {
		cout << d << '\n';
	}
	
	return 0;
}


int main() {
	cout << count(3) << '\n';
	return 0;
}
