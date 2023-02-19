// This is implementation of Stack using Linked list
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// lets define Node structure first
struct Node {
	int data;
	struct Node *next;
};

struct Node *head = NULL;

// Stack operations
// Push in stack using linked list
void push(int x) {
	struct Node *t; // declare new pointer
	t = (struct Node *)malloc(sizeof(struct Node)); // initialize space for new pointer in heap
	
	if (t == NULL) {
		cout << "heap overflow! cannot create pointer" << '\n';
	}

	else {
		t -> data = x;
		t -> next = head;
		head = t;
	}

}

int pop() {
	struct Node *t;
	t = (struct Node *)malloc(sizeof(struct Node));
	if (head== NULL) {
		cout << "Stack is empty!" << '\n';
	}

	else {
		int x = 0;
		struct Node *p;
		p = head;
		head = head -> next;
		x = t -> data;
		delete t;
		return x;

	}
}

void display() {
	struct Node *p;
	p = head;

	while (!p) {
		cout << p -> data << '\n';
		p = p -> next;
	}

}

int main() {

	push(10);
	push(20);
	push(30);
	display();
	cout << "done" << '\n';
	return 0;
}

