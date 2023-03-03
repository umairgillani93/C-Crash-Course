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

void display(Queue q) {
	for (int i = q.front + 1; i <= q.rear; i++) {
		cout << q.Q[i] << '\n';
	}
}

int main() {
	struct Queue q;
	// create a queue
	create(&q, 5);
	enqueue(&q, 10);
	enqueue(&q, 20);
	enqueue(&q, 30);
	enqueue(&q, 40);
	dequeue(&q);
	dequeue(&q);
	display(q);
	return 0;
}
