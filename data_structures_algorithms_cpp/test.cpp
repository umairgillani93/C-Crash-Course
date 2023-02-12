#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Create a Node structure
struct Node {
	int data;
	struct Node *next;
};

// initilize the head Node pointer globally
struct Node *head;

// creates a linked-list
void create() {
	struct Node *p;
	struct Node *q;
	head = new Node;
	p = new Node;
	q = new Node;

	head -> data = 50;
	head -> next = p;
	p -> data = 100;
	q -> data = 200;

	p -> next = q;
	q -> next = NULL;
		
}

void display(struct Node *n) {
	while (n == NULL) {
		cout << n -> data << '\n';
		n = n -> next;
	}	
}

void reverse(struct Node *p) {
	struct Node *q;
	struct Node *r;
	while (!p) {
		r = q;
		q = p;
		p = p -> next;
		p -> next = q;
		q -> next = r;
	}
	p = head;
}

int main() {
	create();
	display(head);
	cout << "done" << '\n';
}
