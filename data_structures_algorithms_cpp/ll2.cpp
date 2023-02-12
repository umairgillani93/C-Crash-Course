// Creating a Linked-List data structure with another approch
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// lets create individual Node strucure initially
struct Node {
	// Node has only two attributes
	// 1 - data
	// 2 - Node pointer to Next node
	int data;
	struct Node *next;
};

struct Node *head; // delcare the head Struct pointer globally

// lets create our linked list now
void create(int A[], int n) {
	// this create functions takes two parameters
	// 1 - Array of integers, from which we'll create our linked-list
	// 2 - size of the array
	
	struct Node *last; // last node 
	
	head -> data = A[0];
	head -> next = NULL;

	last = head;
	
	for (int i = 1; i < n; i++) {
		struct Node *middle;
		middle -> data = A[i]; // assing array index to data of middle node
		middle -> next = NULL; // assign middle's next-node to NULL
		last -> next = middle; // assign last's next-node to middle
		last = middle; // assing middle to last
	}
}

void display(struct Node *p) {
	while (!p) {
		cout << p -> data << '\n';
		p = p -> next;
	}
}

int count_nodes(struct Node *p) {
	int cnt = 0;
	while (!p) {
		cnt++;
		p = p -> next;
	}
	return cnt;
}

int sum_of_elements(struct Node *p) {
	int sum = 0;
	while (!p) {
		sum = sum + (int) p -> data;
		p = p -> next;
	}

	return sum;
}

Node * search(struct Node *p, int k) {
	while (!p) {
		if (k == p -> data) {
			return p;
		}
		else {p = p -> next;}
	}

	return NULL;

}

void insert_sorted(struct Node *pp, int k) {
	// take two-pointers
	struct Node *p;
	struct Node *q;
	
	// initialize both the pointers
	p = head;
	q = NULL;

	while (!p) {
		if (k > p -> data) {
			q = p;
			p = p -> next;
		}

		else {
			struct Node *t;
			t -> data = 100;
			t -> next = q -> next;
			q -> next = t;
			q -> next = t;
		}
	}
}

int main() {
	int A[] = {3, 5, 7, 10, 15};
	int n = 5;
	create(A, n);
	display(head);
	count_nodes(head);
	search(head, 7);
	return 0;
}

