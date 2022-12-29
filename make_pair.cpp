#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	pair<int, int> foo;
	pair<int, int> bar;

	foo = make_pair(10, 20);
	bar = make_pair(11, 22);

	cout << "foo first: " << foo.first << " foo second: " << foo.second << '\n';
	cout << "bar first: " << bar.first << " bar second: " << bar.second << '\n';
	
	return 0;
}
