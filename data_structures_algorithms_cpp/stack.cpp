#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// Structure for stack contains compoments size, top indexd and pointer to an array
struct Stack {
	int size;
	int top;
	int *s;

};


int main() {

	struct Stack st;
	cout << "Enter stack size: " << '\n';
	cin >> st.size;
	st.top = -1; // starting from topmost index initially
	st.s = new int[st.size]; // declare array at heap for the defined size;
	
	return 0;

}
