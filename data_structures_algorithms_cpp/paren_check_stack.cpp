#include <iostream>
#include <bits/stdc++.h>

using namespace std;

struct Node {
	int data;
	struct Node *next;
};

struct Node *top = NULL;

void push(char x) {
	struct Node *t;
	t = (struct Node *)malloc(sizeof(struct Node));

	if (t == NULL) {
		cout << "Stack is full, heap is full!" << '\n';
	}

	else {
		t -> data = x;
		t -> next = top;
		top = t;
	}
}

char pop() {
	struct Node *t;
	char x;
	t = (struct Node *)malloc(sizeof(struct Node));

	if (top == NULL) {
		cout << "Stack is empty!" << '\n';
	}

	else {
		t = top;
		top = top -> next;
		x = t -> data;
		free(t);

	}

	return x;
}


void display(struct Node *p) {
	p = top;
	while (!p) {
		cout << p -> data << '\n';
		p = p -> next;
	}
}

int is_balanced(char *exp) {
	for (int i = 0; exp[i] != '\0'; i++) {
		if (exp[i] == '(') {
			push(exp[i]);
		}

		else if (exp[i] == ')') {
			if (top == NULL) {
				return 0;

			}
			else {
				pop();
			}
		}
	}
	if (top == NULL) {
		return 1;
	}
	
	else {
		return 0;
	}
}


int main() {
	char *exp = "((a+b)*(c-d)))";
	cout << is_balanced(exp) << '\n';
	return 0;
}
