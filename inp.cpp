#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	int a;
	cin >> n;
	vector<int> v1;
	for (int i = 0; i < n; i++) {
		cin >> a;
		v1.push_back(a);
	}

	for (int j = 0; j < n; j++) {
		cout << v1[j] << '\n';
	}
}
