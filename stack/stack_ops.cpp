#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Stack {
	int size;
	int top;
	int *s;
};

int is_full(struct Stack *st) {
	if (st -> top == st -> size -1) {
		return 1;
	}

	else {
		return 0;
	}
}

int is_empty(struct Stack *st) {
	if (st -> top == -1) {
		return 1;
	}
	else {
		return 0;
	}
}

void push(struct Stack *st, int x) {
	if (st -> top == st -> size - 1) {
		cout << "Stack overflow!" << '\n';
	}	

	else {
		st -> top = x;
	}
}

int pop(struct Stack *st) {
	int x;
	if (st -> top == -1) {
		cout << "Stack underflow" << '\n';
	}

	else {
		x = st -> s[st -> top];
		st -> top--;

	}

	return x;
}

int main() {
	struct Stack st;
	cout << "Enter size of stack: " << '\n';
	cin >> st.size;
	st.top = -1;
	st.s = new int[st.size];

	cout << is_full(st) << '\n';
	return 0;
}
