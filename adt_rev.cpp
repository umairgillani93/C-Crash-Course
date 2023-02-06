#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Array {
	int A[20];
	int length;
	int size;
};

void Display(struct Array arr) {
	for (int i = 0; i < arr.length; i++) {
		cout << arr.A[i] << '\n';
	}
}

void Append(struct Array *arr, int x) {
	arr -> A[arr -> length] = x;
	arr -> length++;
}

void Insert(struct Array *arr, int idx, int x) {
	if (idx >= 0 && idx <= arr -> length) {
		for (int j = arr -> length; j > idx; j--) {
			arr -> A[j] = arr -> A[j + 1];
		}

		arr -> A[idx] = x;
		arr -> length++;
	}
}

void Delete(struct Array *arr, int idx) {
	if (idx >= 0 && idx <= arr -> length - 1) {
		for (int i = idx; i < arr -> length; i++) {
			arr -> A[idx] = arr -> A[idx + 1];
		}

		arr -> length--;

	}
}

int main() {
	struct Array arr {{2, 4, 5, 8, 10}, 5, 20};

	Display(arr);
	Append(&arr, 11);
	Display(arr);
	Insert(&arr, 2, 3);
	Display(arr);
	Delete(&arr, 3);
	Display(arr);
	
	return 0;
}

