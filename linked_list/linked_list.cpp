#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	struct Node *next;
};

int main() {
	int *p;
	struct Node *head;
	struct Node *first;
	struct Node *second;
	struct Node *third;

	head -> data = 10;
	first -> data = 20;
	second -> data = 30;
	third -> data = 40;


	// lets link all the nodes now
	head -> next = first;
	first -> next = second;
	second -> next = third;
	third -> next = NULL;

	// point pointer 'p' to head node

	cout << head -> data << '\n';
	cout << first -> data << '\n';
	cout << second -> data << '\n';
	cout << third -> data << '\n';

	cout << head -> next << '\n';
	cout << first -> next << '\n';
	cout << second -> next << '\n';
	cout << third -> next << '\n';

	return 0;
}
