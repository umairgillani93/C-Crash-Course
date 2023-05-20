#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// Structure for stack contains compoments size, top indexd and pointer to an array
struct Stack {
	int size;
	int top;
	int *S;

};

void create(struct Stack *st) {
	int size;
	cout << "enter stack size: " << '\n';
	cin >>  size;
	st -> top = -1;
	
	// initialize stack array
	st -> S = (int *)malloc(size * sizeof(int));

}

void push(struct Stack *st, int x) {
	if (st -> top == st -> size - 1) {
		cout << "Stack full " << '\n';
	}

	st -> top++;
	st -> S[st -> top] = x;
}

int pop(struct Stack *st) {
	// pops out the item at the end of stack
	if (st -> top == -1) {
		cout << "Stack is empty " << '\n';
	}

	else {
		int x = -1;
		x = st -> S[st -> top];
		st -> top--;
		return x;
	}

	return 0;
}


void display(struct Stack st) {
	for (int i = st.top; i > 0; i--) {
		cout << st.S[i] << '\n';
	}
}

void display2(struct Stack *st) {
	for (int i = st -> top; i > 0; i--) {
		cout << st -> S[i] << '\n';
	}
	cout << '\n';
}

bool isEmpyt(struct Stack st) {
	if (st.top == -1) {
		return true;
	}
	else {
		return false;
	}
}

bool isFull(struct Stack st) {
	if (st.top == st.size - 1) {
		return true;
	}
	else {
		return false;
	}
}
	
bool isPeak(struct Stack st) {
	if (st.top == st.size - 1) {
		return true;
	}
	else {
		return false;
	}	
}

int main() {
	struct Stack st;
	create(&st);
	push(&st, 10);
	push(&st, 40);
	push(&st, 50);
	push(&st, 10);
	push(&st, 40);
	push(&st, 50);
	display(st);
	cout << "poped item >> " << '\n';
	cout << pop(&st) << '\n';;
	return 0;
}



