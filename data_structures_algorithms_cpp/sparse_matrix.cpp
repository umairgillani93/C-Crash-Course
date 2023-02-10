// Sparse-Matrix implementation C++ by Umairgillani93@gmail.com
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Lets define a structure for a single element first
struct Element {
	// this structure has three attributes
	// i - row number
	// j - col number
	// x - actual element
	int i;
	int j;
	int x;
};

// Lets now define are actual Matrix
struct Sparse {
	// This matrix has 4 components
	// m - total number of rows
	// n - total number of cols
	// num - number of non-zero elements in sparse matrix
	// *ele - array pointer to number of non-zero elements
	
	int m;
	int n;
	int num;
	struct Element *ele;
}

// A function that creates our sparse-matrix
void create_matrxi(struct Sparse *s) {
	cout << "Enter the dimentions: " << '\n';
	cin >> &s -> m  >> &s -> n; 
	cout << "Enter number of Non-zero elements: " << '\n';
	cin >> &s -> num;

	s -> ele = new int[num]; // create an array pointer of size 'num'
	cout << "Enter all Non-zero elements: " << '\n';
	
	for (int i = 0; i < s -> num; i++) {
		cin >> &s -> ele[i].i >> &s -> ele[i].j >> &s -> ele[i].x;
	}
}

void display(struct Sparse s) {
	int i, j, k;
	for (int i = 0; i < s -> m; i++) {
		for (int j = 0; j < s -> n; j++) {
			if (i == s.ele[k].i && j == s.ele[i].j) {
				cout << s.ele[k++].x;
			}

			else {
				cout << 0 << '\n';
			}
		}
	}
}

int main() {
	struct Sparse s;
	create(&s);
	display(s);
	return 0;
}
