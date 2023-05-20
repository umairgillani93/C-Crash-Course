#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// create a Node structure
struct Node {
	int data;
	struct Node *next;
};

// globally declare the first Node
struct Node *head = NULL;


void Display(struct Node *p) {
	while (p != NULL) {
		cout << p -> data << '\n';
		p = p -> next;
	}
}


// create a singly linked-list from Array
void create(int A[], int n) {
	// decalre middle and last nodes
	struct Node *middle;
	struct Node *last;	

	// initialize the head pointer
	head = (struct Node *)malloc(sizeof(struct Node));


	head -> data = A[0];
	head -> next = NULL;

	last = head;

	for (int i = 1; i < n; i++) {
		// initialize the middle and last pointers
		middle = (struct Node *)malloc(sizeof(struct Node));
		middle -> data = A[i];
		middle -> next = NULL;

		last -> next = middle;
		last = middle;
	}

}
// sum the elements of linked-list
int sum(struct Node *p) {
	int sum = 0;
	while (p != NULL) {
		sum += p -> data;
		p = p -> next;
	}

	return sum;
}

void display_recursive(struct Node *p) {
	if (p != NULL) {
		cout << p -> data << '\n';
		display_recursive(p -> next);
	}
}

int countNodes(struct Node *p) {
	int count = 0;
	while (p != NULL) {
		count++;
		p = p -> next;
	}

	return count;
}

int maxElement(struct Node *p) {
	int max = 0;
	while (p != NULL) {
		if (p -> data > max) {
			max = p -> data;
			p = p -> next;
		}
		else {
			p = p -> next;
		}
	}

	return max;
}

// insert node before first node
// sample_node -> first -> second -> third -> .... -> last
// sample_node -> next = first

void insertNode(struct Node *p, int val) {
	p -> data = val;
	p -> next = head;
	p = head;

}

void insertBeforeHeadNode(struct Node *p, int x) {
	p = (struct Node *)malloc(sizeof(struct Node));
	p -> data = x;
	p -> next = head;
	head = p;
}


int main() {
	int A[] = {7, 9, 16, 11, 19};
	int n = 5;
	create(A, n);
	cout << "Before insertion" << '\n';
	Display(head);
	cout << "After insertion " << '\n';

	// insert Node before Head Node in LinkedList
	// time complexity O(N)
	int x = 3;
	struct Node *sample;
	sample = (struct Node *)malloc(sizeof(struct Node));
	sample -> data = x;
	sample -> next = head;
	head = sample;
	

	
	// insert Node at some position = pos
	// time complexity O(N)
	// we have a Linkedlist Node1 -> Node2 -> Node3 -> Node4 -> ... -> NodeLast
	// insert at certain position pos
	// traverse linked list and find the position with the help of counter
	// insert a Node there 
	// take pos - 1 index and assign (pos - 1) -> next = p;
	// take p and assign p -> (pos + 1)
	// let's start..
	int val = 100;
	int pos = 3;

	struct Node *p;
	p = (struct Node *)malloc(sizeof(struct Node));
	int c = 0;
	while (true) {
		if (c < pos) {
			p = p -> next;
			c++;
		}
		else {
			struct Node *t;
			t = (struct Node *)malloc(sizeof(struct Node));
			t -> data = val;
			t -> next = p -> next;
			p -> next = t;
		}
	}
	Display(sample);


	//display_recursive(head);
	//cout << "Maximum element is: " << maxElement(head) << '\n';
	//cout << countNodes(head) << '\n';
	//cout << countNodes(head);
	//cout << "sum is: " << '\n';
	//cout << sum(head) << '\n';
	return 0;
}

// create a linked list
// first node
// last node
// first -> next = last
// last -> next = NULL
// middle node t
// last -> next = t;
// t = last;




















