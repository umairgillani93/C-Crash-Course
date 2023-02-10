#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	struct Node *next;
};

int main() {
	struct Node *p;
	struct Node *q;

	p -> data = 3;
	p -> next = q;

	cout << p -> data << '\n';
	cout << p -> next << '\n';

	return 0;
}

