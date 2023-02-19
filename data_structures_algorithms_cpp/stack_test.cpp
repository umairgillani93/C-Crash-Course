#include <iostream>
#include <bits/stdc++.h>

using namespace std;

struct Stack {
	int size;
	int top;
	int *s; // pointer to an array in heap
		
};

int main() {
	struct Stack st;
	cout << "enter size of stack: " << '\n';
	cin >> st.size;
	st.top = -1; // initially
	st.s = new int[st.size];

	return 0;

}

