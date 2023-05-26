#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
	// some string
	// we have to find the maximum repeater charater
	// let's  try it with map data structure (easy way)

	map<char, int> map;
	string s = "some randome string";

	for (int i = 0; i < s.size(); i++) {
		map[s[i]]++;
	}


	sort(map.begin(), map.end());

	for (auto it = map.begin(); it != map.end(); it++) {
		cout << "first: " << " "  << it -> first << " " << " second: " <<  it -> second << '\n';
	}

	
	return 0;
}


