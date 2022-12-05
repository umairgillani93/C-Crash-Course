#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	vector<int> v1;
	v1.push_back(10);
	v1.push_back(11);
	v1.push_back(9);

	int max_num;
	max_num = v1[0];

	for (int i = 1; i < v1.size(); i++) {
		if (v1[i] > max_num) {
			max_num = v1[i];
		}	
		else 
			continue;
	}
	cout << "max number is " << max_num << '\n';

	return max_num;
}
