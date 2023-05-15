#include <iostream>
#include <bits/stdc++.h>

using namespace std;

struct Node {
	int data;
	struct Node *next;
};

struct Node *first = NULL;

void Display(struct Node *p) {
	while (p != NULL) {
		cout << p -> data << '\n';
		p = p -> next;
	}
}
void create(int A[], int n) {
	// initialize the pointers
	struct Node *t;
	struct Node *last;

	first = (struct Node *)malloc(sizeof(Node));
	first -> data = A[0];
	first -> next = NULL;

	last = first;

	for (int i = 1; i < n; i++) {
		t = (struct Node *)malloc(sizeof(struct Node));
		t -> data = A[i];
		t -> next = NULL;
		last -> next = t;
		last = t;
	}

}

int main() {
	int A[] = {1, 7, 4, 11, 13};
	int n = 5;
	create(A, n);
	Display(first);
	return 0;
}
