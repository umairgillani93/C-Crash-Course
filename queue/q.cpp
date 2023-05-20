#include <iostream>
#include <bits/stdc++.h>

using namespace std;

struct Queue {
	// Queue architecture FIFO
	// queue size
	// queue index 
	// queue array
	int size;
	int front = -1;
	int rear = -1;
	int *Q; // arrayj

};

void create(struct Queue *q) {
	q -> front = -1;
	q -> rear = -1;
	q -> Q = (int *)malloc(q -> size * sizeof(int));
}

void enqueue(struct Queue *q, int x) {
	if (q -> rear == q -> size - 1) {
		cout << "Queue is full " << '\n';
	}

	else {
		q -> rear++;
		q -> Q[q -> rear] = x;
	}
}

int dequeue(struct Queue *q) {
	int x = -1;
	if (q -> front == q -> rear) {
		cout << "Queue is empty " << '\n';
	}

	else {
		q -> front++;
		x = q -> Q[q -> front];

	}
	return x;
}

void display(struct Queue q) {
	for (int i = q.front + 1; i < q.rear; i++) {
		cout << q.Q[i] << '\n';
	}
	cout << '\n';
}

int main() {
	struct Queue q;
	int size = 10;
	create(&q);
	enqueue(&q, 10);
	enqueue(&q, 20);
	enqueue(&q, 30);
	enqueue(&q, 40);
	display(q);
	
}
