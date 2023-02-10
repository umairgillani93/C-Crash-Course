#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool is_palindrom(string &s) {
	vector<char> new_s;

	for (int i = s.size(); i >= 0; i--) {
		new_s.push_back(s[i]);
	}

	for (int j = 0; j < s.size() + 1; j++) {
		cout << new_s[j] << '\n';
	}


}

int main() {
	string s = "madam";
	is_palindrom(s);
	return 0;
}
