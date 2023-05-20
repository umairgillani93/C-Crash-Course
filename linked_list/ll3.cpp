#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// Linkedlist has Nodes
// A single node contains 'data' part and 'pointer to next node of type structure Node'
// Let's create a Node structure

struct Node {
	int data; // data part
	struct Node *next;

}*first = NULL;

// Let's creata linkedlist now.
// we're gonna need an Array, looping which we can insert items in our linked list

// Let's create a global Head node first
// We'll be accessing this head node in our implementation throughout.


void Display(struct Node *p) {
	while (p != NULL) {
		cout << p -> data << '\n';
		p = p -> next;
	}
}

void create(int A[], int n) {
	// Initialize middle and last Nodes
	struct Node *t;
	struct Node *last;
	// Let's also allocate space for head pointer at heap
	first = (struct Node *)malloc(sizeof(struct Node));

	// Assing values now
	first -> data = A[0];
	first -> next = NULL;

	last = first;

	for (int i = 1; i < n; i++) {
		// Allocate space each time for middle pointer
		t = (struct Node *)malloc(sizeof(struct Node));
		t -> data = A[i];
		t -> next = NULL;
		last -> next = t;
		last = t;

	}

}

int main() {
	int A[] = {1, 2, 7, 19, 11};
	int n = 5;
	create(A, n);
	Display(first);
	return 0;
}
