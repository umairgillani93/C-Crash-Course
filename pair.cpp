#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<pair<int, string>> v;
	pair<int, string> int_str;
	pair<int, string> int_float;
	int_str.first = 100;
	int_str.second = "name";
	int_float.first = 10;
	int_float.second = "u";
	v.push_back(int_str);
	v.push_back(int_float);

	for (int i = 0; i < v.size(); i++) {
		cout << v[i].first << '\n';
		cout << v[i].second << '\n';
		cout << '\n';
	}
	return 0;
}


