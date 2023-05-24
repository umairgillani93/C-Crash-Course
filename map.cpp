#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int main() {
	map<string, int> map;
	map["one"] = 1;
	map["two"] = 2;
	map["three"] = 3;

	cout << map["one"] << '\n';

	for (auto it = map.begin(); it != map.end(); it++) {
		cout << "first: "  << it -> first <<  " second: " <<  it -> second << '\n';
	}

	map.insert(pair<string, int>("umair", 7));

	for (auto it = map.begin(); it != map.end(); it++) {
		cout << "first: " << it -> first << " second: " << it -> second << '\n';

	}

	return 0;
}
