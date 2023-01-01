#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//int main() {
//	vector<int> v{1,1,1,2,2,2,2,3,3,4,4,4,4,4,4,4,4,4};
//	int best = 0;
//	int count = 0;
//	for (int i = 0; i < v.size() - 1; i++) {
//		if (v[i] == v[i + 1]){
//			count++;
//		}
//		else {
//			best = max(best, count);
//			count = 0;
//		}
//	}
//	cout << 
//	cout << best << "\n";
//	return 0;
//}
//
int main() {
	pair<int, int> p;
	vector<int> v{1,2,3,4,4,4,4};
	int b = 0;
	int c = 0;
	for (int i = 0; i < v.size() - 1; i++) {
		if (v[i] == v[i + 1]) {
			c++;
		}
		else { 
			b = max(c, b);
			c = 0;
			p.first = v[i];
			p.second = b;
		}
	}
	cout << "number is: " << p.first << " and its count is " << p.second << '\n';
	return 0;
	
}

