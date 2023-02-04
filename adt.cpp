#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Array {
	int A[20];
	int size;
	int length;
};

void Display(struct Array arr) {
	for (int i = 0; i < arr.length; i++) {
		cout << arr.A[i] << '\n';
	}
}

void Append(struct Array *arr, int x) {
	if (arr -> length < arr -> size) {
		arr -> A[arr -> length++] = x;
	}
}

void Insert(struct Array *arr, int idx, int x) {
	if (idx >= 0 && idx <= arr -> length) {
		for (int i = arr -> length; i < idx; i--) {
			arr -> A[i] = arr -> A[i - 1];
		}

		arr -> A[idx] = x;
		arr -> length++;
	}
	
}

void Delete(struct Array *arr, int idx) {
	if (idx >= 0 && idx < arr -> length) {
		for (int i = idx; i < arr -> length - 1; i++) {
			arr -> A[idx] = arr -> A[idx + 1];
		}

		arr -> length--;
	}
}

int main() {
	struct Array arr {{2,3,4,5,6}, 20, 5};
	Append(&arr, 10);
	Insert(&arr, 2, 55);
	Delete(&arr, 2);
	Display(arr);

	return 0;
}
