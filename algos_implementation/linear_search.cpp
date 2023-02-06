#include <iostream>
#include <bits/stdc++.h>

using namespace std;

struct Array {
	int A[20];
	int length;
	int size;
};

int ls(vector<int> arr, int k) {
	for (int i = 0; i < arr.size(); i++) {
		if (arr[i] == k) {
			return i;
		}
		else {continue;}
	}

	return -1;
}

int LinearSearch(struct Array arr, int k) {
	for (int i = 0; i < arr.length; i++) {
		if (k == arr.A[i]) {
			return i;
		}
		else {continue;}
	}
	return -1;
}

int main() {
	//int arr_size;
	//cin >> arr_size;
	//vector<int> input;

	//while (arr_size--) {
	//	int a;
	//	cin >> a;
	//	input.push_back(a);
	//}

	//cout << ls(input, 6) << '\n';
	
	struct Array arr = {{2, 4, 6, 8, 10}, 5, 20};
	cout << arr.length << '\n';
	cout << arr.size << '\n';
	int k;
	cin >> k;

	cout << LinearSearch(arr, k) << '\n';
	return 0;
}
