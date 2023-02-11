#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	struct Node *next;
};

int main() {
	struct Node *head;
	struct Node *last;
	int arr[] = {1, 2, 3};
	
	// initilize head Node
	head -> data = arr[0];
	head -> next = NULL;
	last = head;
	
	// assign values to attributes
	for (int i = 1; i < sizeof(arr) / sizeof(arr[0]); i++) {
		struct Node *middle;
		middle -> data = arr[i];
		middle -> next = NULL;
		last -> next = middle;
		last = middle;
	}

	// insert new Node in created linked-list
	struct Node *new_node;
	new_node -> data = 50;
	new_node -> next = NULL;

	struct Node *p;
	p = head;
	int pos = 4;
	for (int i = 0; i < pos; i++) {
		p = p -> next;
	}

	new_node -> next = p -> next;
	p -> next = new_node -> next;
	return 0;
}

