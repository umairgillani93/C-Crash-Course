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

int main() {
	int A[] = {7, 9, 16, 11, 19};
	int n = 5;
	create(A, n);
	//Display(head);
	//display_recursive(head);
	cout << "Maximum element is: " << maxElement(head) << '\n';
	cout << countNodes(head) << '\n';
	cout << countNodes(head);
	cout << "sum is: " << '\n';
	cout << sum(head) << '\n';
	return 0;
}
