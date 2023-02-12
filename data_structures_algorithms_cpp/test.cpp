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


// Create a linked-list
void create(int arr[], int n) {
	struct Node *last;

	head -> data = arr[0];
	head -> next = NULL;
	last -> next = NULL;
	last = head;

	for (int i = 1; i < n; i++) {
		struct Node *middle;
		middle -> data = arr[i];
		middle -> next = NULL;
		last -> next = middle;
		last = middle;
	}

}

void display(struct Node *p) {
	while (!p) {
		cout << p -> data << '\n';
		p = p -> next;
	}

}

int count_nodes(struct Node *p) {
	int c = 0;
	while (!p) {
		++c;
		p = p -> next;
	}

	return c;
}

Node * search(struct Node *p, int key) {
	while (!p) {
		if (key == p -> data) {
			return p -> next;
		}
	}

	return NULL;
}

int main() {
	int arr[] = {1, 3, 5, 7, 9};
	int size = 5;
	create(arr, size);
	display(head);
	return 0;
}	
