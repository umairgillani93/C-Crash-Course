#include <iostream>
#include <bits/stdc++.h>

using namespace std;
// create a structure of stack, with all  members
// create 'create' method to create a stack
// create method takes input as structure pointer

struct Stack {
	int top;
	int size;
	int *S;

};

void create(struct Stack *st) {
	// create stack from an Array
	int size;
	cout << "enter stack size: " << '\n';
	cin >> size;
	st -> top = -1;
	st -> S = (int *)malloc(st -> size * sizeof(int));
	
}


void display(struct Stack *st) {
	for (int i = st -> top; i > 0; i--) {
		cout << st -> S[i] << '\n';
	}
	cout << '\n';
}

void push(struct Stack *st, int x) {
	// push 'x' in stack
	if (st -> top == st -> size - 1) {
		cout << "stack is full " << '\n';
	}
	
	else {
		st -> top++;
		st -> S[st -> top] = x;
	}
}

int main() {
	//struct Stack *st;
	//create(st);
	//push(st, 10);
	//display2(st);
	int *S;
	int size = 3;
	S = (int *)malloc(size * sizeof(int));
	for (int i = 0; i < sizeof(S)/ sizeof(S[0]); i++) {
	}
	cout << &S[i] << '\n';
	return 0;
}



