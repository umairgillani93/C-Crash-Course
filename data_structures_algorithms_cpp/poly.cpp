#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Lets define a single term of Polynomial first using Structure
struct Term {
	// This has two attributes; coefficient and exponent
	int coeff;
	int exp;

};

// Lets define the actual polynomial now
struct Poly {
	// This is two attributes; first is size
	// and second is array pointer of polynomial
	
	int n; // represents size
	struct Term *t; // array pointer for terms array
};

int main() {
	struct Poly p;
	cout << "Enter size of Non-zero terms: " << '\n';
	cin >> &p.n;
	p.t = new Term[p.n];

	cout << "Enter Polynomial terms: " << '\n';
	for (int i = 0; i < p.n; i++) {
		cout << "Term number: " << i + 1 << '\n';
		cin >> &p.t[i].coeff, &p.t[i].exp;
	}

	for (int j = 0; j < p.n; j++) {
		cout << p.t[j].coeff << " " << p.t[j].exp << '\n';
	}

	return 0;
}

