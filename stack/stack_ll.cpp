/*This is implementation of Stack using Linked list
 implementation by Umairgillani93@gmail.com
  dated: Feb 25,2023

  */
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// lets define Node structure first
struct Node {
	// data component
	int data;
	// next node
	struct Node *next;
};

// initialize head not globally
struct Node *head = NULL;

// Stack operations
// Push in stack using linked list
void push(int x) {
	struct Node *t; // declare new pointer
	t = (struct Node *)malloc(sizeof(struct Node)); // initialize space for new pointer in heap
	
	// check for null pointer (happens when heap is full)
	if (t == NULL) {
		cout << "heap overflow! cannot create pointer" << '\n';
	}

	else {
		// assign x to t's data
		t -> data = x;
		// at the head node
		t -> next = head;
		head = t;
	}

}

int pop() {
	// initilize a new node
	struct Node *t;
	// create space at heap for new node
	t = (struct Node *)malloc(sizeof(struct Node));
	// check if node is created at heap
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
	// Traverse through the entire stack and print out values
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

