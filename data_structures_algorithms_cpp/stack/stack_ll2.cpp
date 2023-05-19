#include <iostream>
#include <bits/stdc++.h>

using namespace std;

struct Node {
	int data;
	struct Node *next;
};

struct Node *top = NULL;

void push(int x) {
	// declare a pointer t
	struct Node *t;
	t = (struct Node *)malloc(sizeof(struct Node));

	if (t == NULL) {
		cout << "Stack is full " << '\n';
	}
	else {
		t -> data = x;
		t -> next = top;
		top = t;
	}
	
}

int pop() {
	int x = -1;
	if (top == NULL) {
		cout << "Stack is empty " << '\n';
	}

	else {
		struct Node *t;
		t = (struct Node *)malloc(sizeof(struct Node));
		t = top;
		top = top -> next;
		x = t -> data;
		free(t); // free space on heap
	}

	return x;
}

void display(struct Node *p) {
	while (p != NULL) {
		cout << p -> data << '\n';
		p = p -> next;
	}
	cout << '\n';
}

int main() {
	push(10);
	push(20);
	push(30);
	display(top);
	cout << "after pop " << '\n';
	cout << pop() << '\n';
	return 0;

}

