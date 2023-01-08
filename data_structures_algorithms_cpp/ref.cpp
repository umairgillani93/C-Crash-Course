#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// Reference is just another name to a same variable
	// Incrementing the refernece will increment the original variable
	int a = 10;
	int &r = a;
	r++;
	cout << a << '\n';
	return 0;
}
