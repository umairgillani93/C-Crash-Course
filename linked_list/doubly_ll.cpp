#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// doubly linked list
// one next pointer
// one prev pointer
// Node has three components 
// data, next pointer and prev pointer

struct DNode {
	int data;
	struct DNode *next;
	struct DNode *prev;

};

struct DNode *head = NULL;


void create(int A[], int size) {
	// initialize space for head Node
	
	//struct DNode *second;
	//struct DNode *third;
	//struct DNode *last;

	//head = (struct DNode *)malloc(sizeof(struct DNode));
	//second = (struct DNode *)malloc(sizeof(struct DNode));
	//third = (struct DNode *)malloc(sizeof(struct DNode));
	//last = (struct DNode *)malloc(sizeof(struct DNode));

	//head -> data = 10;
	//head -> next = second;
	//head -> prev = NULL;
	//
	//second -> data = 20;
	//second -> next = third;
	//second -> prev = head;

	//third -> data = 30;
	//third -> next = last;
	//third -> prev = second;

	//last -> data = 40;
	//last -> next = NULL;
	//last -> prev = third;
	
	struct DNode *t, *last;
	head = (struct DNode *)malloc(sizeof(struct DNode *));

	head -> data = A[0];
	head -> next = NULL;
	head -> prev = NULL;

	last = head;

	for (int i = 1; i < size; i++) {
		t = (struct DNode *)malloc(sizeof(struct DNode));
		t -> data = A[i];
		t -> next = last -> next;
		t -> prev = last;
		last -> next = t;
		last = t;
	}


}


void display(struct DNode *p) {
	while (p != NULL) {
		cout << p -> data << '\n';
		p = p -> next;

	}
}

int main() {
	int A[] = {1, 2, 3, 4, 5};
	int size = 5;
	create(A, size);
	display(head);
	return 0;
}


// first Node, t node and last node
// last = first / last is pointing on first
// t -> next = last -> next;
// t -> prev = last;
// last -> next = t;
// last = t;
//
// FOR SINGLLY LINKED LIST
// last -> next = t;
// last = t;
