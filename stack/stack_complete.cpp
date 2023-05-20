#include <iostream>
#include <bits/stdc++.h>

using namespace std;

struct Stack {
	int size;
	int top;
	int *s; // pointer to an array in heap
		
};

// check if stack is empty
int isEmpty(struct Stack st) {
	if (st.top == -1) {
		return 1;
	}

	else {
		return 0;
	}

}

// check if stack is full
int isFull(struct Stack st) {
	if (st.top == st.size - 1) {
		return 1;
	}

	else {
		return 0;
	}
}

// push item inside stack
void push(struct Stack *st, int x) {
	if (st -> top == st -> size - 1) {
		cout << "Stack is full! " << '\n';
	}

	else {
		st -> top++;
		st -> s[st -> top] = x;
	}
}

// create a stack
void create(struct Stack *st) {
	cout << "enter size of stack: " << '\n';
	cin >> st -> size;
	st -> top = -1; // initially
	st -> s = new int[st -> size];

}	

void display(struct Stack st) {
	for (int i = st.top; i >= 0; i--) {
		cout << st.s[i] << '\n';
	}
}

int stackTop(struct Stack st) {
	if (!isEmpty(st)) {
		return st.s[st.top];
	}

	else {
		return -1;
	}
}

int pop(struct Stack *st, int idx) {
	// takes pointer to Structure Stack and index to pop from (mostly last index)
	int x = -1;
	if (st -> top == -1) {
		cout << "Stack underflow!" << '\n';
	}

	else {
		x = st -> s[st -> top--];
		return x;
	}	
}


int main() {
	struct Stack st;

	create(&st);
	push(&st, 10);
	push(&st, 20);
	push(&st, 30);

	display(st);
	return 0;

}

