#include <iostream>
#include <vector>
using namespace std;

int main() {
	// returns the reverse of a vector
	
	vector<int> v1;
	for (int i = 5; i < 10; i++) {
		v1.push_back(i);
	}

	//for (int j = 0; j < 10; j++) {
	//	cout << v1[j] << '\n';

	//}

		//cout << *v1.begin() << '\n';
		//cout << *v1.end() << '\n';


	//for (auto it = v1.begin(); it != v1.end(); it++) {
	//	cout << it <<  "\n";
	//}
	

	cout << '\n';

	for (auto j = v1.begin(); j != v1.end(); j++) {
		cout << *j << '\n';
	}


	cout << '\n';
	cout << *v1.rbegin() << '\n';



}
