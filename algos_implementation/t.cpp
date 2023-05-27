#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
	// s = "aaa";
	// s[i] == s[i + 1];
	// cur++;
	// if s[i] != s[i + 1];
	// if (curr > best);
	// if yes -> best = curr;
	// curr = 1;
	
	string s = "aaabbbb";
	
	int curr = 1;
	int best = 1;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == s[i + 1]) {
			curr++;
			//cout << curr << '\n';
		}

		else {
			if (curr > best) {
				best = curr;
				curr = 1;
			}
		}
	}
	
	cout << best << '\n';

	return 0;
}


