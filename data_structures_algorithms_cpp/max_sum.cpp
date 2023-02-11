#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int A[] = {-11, 7, 3, 21, 4, -5, 18, -11, 12, 2};
	int curr_sum = 0;
	int max_sum = 0;

	for (int i = 0; i < sizeof(A) / sizeof(A[0]); i++) {
		curr_sum += A[i];
		
		if (curr_sum > max_sum) {
			max_sum = curr_sum;
		}

		if (curr_sum < 0) {
			curr_sum = 0;
		}
	}

	cout << max_sum << '\n';
	return 0;
}
