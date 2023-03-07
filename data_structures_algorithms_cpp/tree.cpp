#include <iostream>
#include <bits/stdc++.h>

using namespace std;

struct Queue {
	int front; // front pointer
	int rear; // rear pointer
	int size; // size of queue
	int *Q; // Array pointer for queue
};

void create(struct Queue *q, int size) {
	q -> size = size; // queue size
	q -> front = -1; // front pointer
	q -> rear = -1; // rear pointer
	q -> Q = new int[q -> size];
}

// enqueue method
void enqueue(Queue *q, int x) {
	// check if queue is full
	if (q -> rear == q -> size - 1) {
		cout << "Queue is full" << '\n';
	}

	else {
		q -> rear++;
		q -> Q[q -> rear] = x;
	}
}

// dequeue method
int dequeue(Queue *q) {
	// check if queue is empty
	int x = 0;
	if (q -> front == q -> rear) {
		cout << "Queue has not items in it" << '\n';
	}

	else {
		q -> front++;
		x = q -> Q[q -> front];
	}

	return x;
}

bool isEmpty(Queue *q){
	if (q -> front == q -> rear) {
		return true;
	}

	else {
		return false;
	}
}

bool isFull(Queue *q) {
	if (q -> rear == q -> size - 1) {
		return true;
	}
	 
	else {
		return false;
	}
}

void display(Queue q) {
	for (int i = q.front + 1; i <= q.rear; i++) {
		cout << q.Q[i] << '\n';
	}
}

// Tree Implemetation
struct Node {
	struct Node *l_child;
	struct Node *r_child;
	int data;
};

struct Node *root; // global Node pointer

void create_tree() {
	Node *p, *t;
	int x; 
	struct Queue q;

	// create root Node
	cout << "Enter root value : " << '\n';
	cin >> x;

	// create root now
	root = (struct Node *)malloc(sizeof(struct Node));
	root -> data = x;
	root -> l_child = 0;
	root -> r_child = 0;
	
	// insert root pointer in Queue
	enqueue(root);

	// check if queue is not empty
	while (!isEmpty(q)) {
		p = dequeue(&q); // assign item from Queue to poitner 'p'
		cout << "Enter left child : " << '\n';
		cin >> x;

		if (x != -1) {
			t = (struct Node *)malloc(sizeof(struct Node));
			t -> data = x;
			t -> l_child = t -> r_child = 0;
			p -> l_child = t;
			enqueue(t);

		}

		cout << "Enter right child : " << '\n';
		cin >> x;

		if (x != -1) {
			t = (struct Node *)malloc(sizeof(struct Node));
			t -> data = x;
			t -> l_child = 0;
			t -> r_child = 0;
			p -> r_child = t;
			enqueue(t);

		}
	}
	
}

int main() {
	struct Queue q;
	struct Node tree;
	create_tree();
	return 0;
}



