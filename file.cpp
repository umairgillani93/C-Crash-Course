#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

vector<int> test(vector<int> test_vector) {
	vector<int> new_vector;
	for (int i = 0; i < test_vector.size(); i++) {
		new_vector.push_back(test_vector[i] * test_vector[i]);
	}

	return new_vector;
}

//vector<vector<int>> inside(int n) {
//	vector<int> ret_vector;
//	for (int i = 0; i < n; i++){
//		vector<int> in_vector;
//		cin >> in_vector;
//		ret_vector.push_back(in_vector);
//		
//	}
//
//	return ret_vector;
//}



int main() {
	vector<int> v(5, 10);

	for (int i = 0; i < v.size(); ++i) {
		cout << v[i] << '\n';
	}

	vector<int>::iterator it = v.begin();
	cout << *v.begin() << '\n';
	cout << *it << '\n';
	return 0;

}	
