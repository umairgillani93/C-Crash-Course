#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int curr_cnt = 1;
	int max_cnt = 0;
	char arr[] = {'a', 'a', 'b', 'b', 'b', 'b', 'b', 'c', 'c', 'c'};

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		if (arr[i] == arr[i + 1]) {
			curr_cnt += 1;
		}
		else {
			if (curr_cnt > max_cnt) {
				max_cnt = curr_cnt;
				curr_cnt = 1;
			}

			else {
				continue;
			}
		}
	}

	cout << max_cnt << '\n';

	return 0;

}
