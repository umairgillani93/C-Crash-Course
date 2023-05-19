#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Stack {
	// stack has top, which is -1 when stack is empty
	int top;
	int size;
	int *S;

};

void create(struct Stack *st) {
	cout << "Enter stack size: " << '\n';
	int size;
	st -> size = size;
	
	// initialize an Array 'S' in  heap
	// this will be used to initialize our stack DS
	st -> S = (int *)malloc(st -> size * sizeof(int));

}

void display2(struct Stack st) {
	for (int i = st.top; i > 0; i--) {
		cout << st.S[i] << '\n';
	}
	cout << '\n';
}

void display(struct Stack *st) {
	for (int i = st -> top; i > 0; i--) {
		cout << st -> S[i] << '\n';
	}

	cout << '\n';
}

void push(struct Stack *st, int x) {
	if (st -> top == st -> size - 1) {
		cout << "stack overflow " << '\n';
	}

	else {
		st -> top++;
		st -> S[st -> top] = x;
	}
}

int pop(struct Stack *st) {
	int x = -1;
	if (st -> top == -1) {
		cout << "stack underflow" << '\n';
	}
	
	else {
		x = st -> S[st -> top--];

	}
	return x;
}

int main() {
	struct Stack st;
	create(&st);
	cout << "stack created " << '\n';
	push(&st, 10);
	display2(st);
	return 0;
}


