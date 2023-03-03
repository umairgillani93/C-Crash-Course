#include <iostream>
#include <bits/stdc++.h>

using namespace std;

struct Queue {
	int size; // size of queue
	int front; // front pointer
	int rear; // rear pointer
	int *Q; // pointer to an array for dynamic creation
};

void enqueue(Queue *q, int x) {
	// takes two parameters
	// 1. array pointer
	// 2. item to be enqueued
	// first we need to check if queue is full
	
	if (q -> rear == q -> size - 1) {
		cout << "queue is full " << '\n';
	}

	else {
		q -> rear++; // move rear index pointer to next index
		q -> Q[q -> rear] = x; // add item at Q[q -> rear] position
	}	
}


int dequeue(Queue *q) {
	int x = -1; // set initial variable
	
	// check if queue is empty
	if (q -> front == q -> rear) {
		cout << "Queue is empty" << '\n';
	}
	else {
		// move front index pointer to next index
		q -> front++;
		// take out the element at front index in queue
		x = q -> Q[q -> front];
	}
	return x;
}

// create a queue
void create(struct Queue *q, int size) {
	q -> size = size;
	q -> front = -1;
	q -> rear = -1;
	q -> Q = (int *)malloc(q -> size *sizeof(int)); // initialize array at heap
}

void display(struct Queue q) {

	for (int i = q.front + 1; i < q.rear; i++) {
		cout << q.Q[i] << '\n';
	}
}

int main() {
	// create Queue object
	struct Queue q;
	
	create(&q, 5);
	enqueue(&q, 10);
	enqueue(&q, 20);
	enqueue(&q, 30);
	
	display(q);
	return 0;

}

