#include <iostream>
#include <bits/stdc++.h>
using namespace std;


struct Node {
	int data;
	struct Node *next;

};


int main() {
	struct Node *first;
	struct Node *second;
	struct Node *third;

	first -> data = 10;
	first -> next = second;
	second -> data = 20;
	second -> next = third;
	third -> data = 30;
	third -> next = NULL;

	cout << first -> data << '\n';
	cout << first -> next << '\n';
	cout << second -> data << '\n';
	cout << second -> next << '\n';
	cout << third-> data << '\n';
	cout << third -> next<< '\n';

	return 0;
}
