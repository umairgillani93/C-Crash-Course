#include <iostream>
#include <bits/stdc++.h>

using namespace std;

struct Node{
	int data;
	struct Node *next;

};

//initialize pointer to head node globally
struct Node *head = NULL;

// lets define push method
void push(int x) {
	struct Node *t; // initialize the new node
	t = (struct Node *)malloc(sizeof(struct Node));

	// check if node is created a heap memory
	if (t == NULL) {
		cout << "Heap is full, node can't be created!!" << '\n';
	}

	else {
		t -> data = x;
		t -> next = head;
		head = t;
	}
}

// lets define pop method
int pop() {
	struct Node *t;
	t = (struct Node *)malloc(sizeof(struct Node));

	// check if stack is empty
	if (head == NULL) {
		cout << "stack is empty" << '\n';
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
	
	// check unless p is NULL
	while (!p) {
		// print p's data and move p to next node
		cout << p -> data << '\n';
		p = p -> next;
	}
}

int main() {
	push(10);
	push(20);
	push(30);
	display();
	return 0;
}


