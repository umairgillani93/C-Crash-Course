// most repeated character

#include <iostream>
#include <bits/stdc++.h>


using namespace std;

int main() {
	string s;
	getline(cin, s);
	
	// sort the string first of all
	sort(s.begin(), s.end());

	int curr = 1;
	int best = 1; 

	for (int i = 0; i < s.size(); i++) {
		if (s[i] == s[i + 1]) {
			curr++;
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

// s = "aaabbc";
// s[0] == s[1] -> curr = 2; 
// curr = 2; best = 1; curr > best; best = curr; best = 2;
//
