#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int> v{1,2,3,4,5};
	for (auto it = v.begin(); it != v.end(); it++) {
		cout << *it << '\n';
	}

	for (auto it = v.begin(); it != v.end(); it++) {
		cout << "Address: " << &it << '\n';
	}
	
}
