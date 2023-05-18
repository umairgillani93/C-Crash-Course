#include <iostream>
#include <bits/stdc++.h>

using namespace std;
// The ideas is to take three pointers, p -> inital pointer, q -> next to p and r -> next to q
// we'll traverse the LL and swap the positions of adjacent pointers, till we have a NULL pointer; indication of LL end.
// n1 -> n2 -> n3 -> ... -> nn
// n1 <- n2 <- n3 <- ... <- nn

// q     r     p..
// n1 -> n2 -> n3 -> ... -> nn
// n1 <- n2 <- n3 <- ... <- nn

struct Node {
	int data;
	struct Node *next;

}; 

struct Node *first = NULL;

void reverse(struct Node *p) {
	// declare two pointers to travers and swap the nodes
	struct Node *q = NULL;
	struct Node *r = NULL;

	while (p != NULL) {
		r = q;
		q = p;
		p = p -> next;
		q -> next = r;
	}

	first = q;
}

void create(int A[], int size) {
	first = (struct Node *)malloc(sizeof(struct Node));
	first -> data = A[0];
	first -> next = NULL;

	struct Node *t;
	struct Node *last;

	last = first;

	for (int i = 1; i < size; i++) {
		t = (struct Node *)malloc(sizeof(struct Node *));
		t -> data = A[i];
		t -> next = NULL;
		last -> next = t;
		last = t;
	}
}

void display(struct Node *p) {
	while (p != NULL) {
		cout << p -> data << '\n';
		p = p -> next;
	}
}

int main() {
	int A[] = {1, 10, 15, 11, 29};
	int size = 5;
	create(A, size);
	display(first);
	cout << "After reversal: " << '\n';
	reverse(first);
	display(first);
	return 0;
}
