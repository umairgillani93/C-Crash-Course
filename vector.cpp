#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	vector<int> vec1;
	for (int i = 0; i < 10; i++) {
		vec1.push_back(i);
	}

	for (int j = 0; j < 10; j++) {
		cout << vec1[j] << '\n';
	}

	cout << vec1.begin() << '\n';
	cout << vec1.end() << '\n';

	

}
