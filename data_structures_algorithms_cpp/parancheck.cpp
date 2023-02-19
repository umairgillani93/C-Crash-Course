#include <iostream>
#include <bits/stdc++.h>
#include <string>

using namespace std;

int main() {
	string s = "((a+b)*(c-d)";
	int open_cnt = 0;
	int cls_cnt = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '(') {
			open_cnt++;
		}

		else if (s[i] == ')'){
			cls_cnt++;
		}

	}

	if (open_cnt == cls_cnt) {
		cout << "equal" << '\n';
	}

	else {
		cout << "not equal" << '\n';
	}

	return 0;

}
