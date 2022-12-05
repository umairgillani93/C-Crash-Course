#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int> vect1;
	vect1.push_back(23);
	vect1.push_back(19);
	vect1.push_back(11);
	vect1.push_back(12);
	vect1.push_back(18);

	for (int i = 0; i < vect1.size(); i++) {
		cout << vect1[i] << '\n';
	}

	cout << "sorted vector in reverse order " << '\n';

	sort(vect1.end(), vect1.begin());

	for (int j = 0; j < vect1.size(); j++) {
		cout << vect1[j] << '\n';
		}		
	return 0;
}
