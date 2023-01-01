#include <iostream>
#include <bits/stdc++.h>
using namespace std;

pair<int, int> sol() {
	pair<int, int> p;
	vector<int> v{1,2,2,2,3,3,3,3,4,4,4,4,4,4,4};
	int b = 0;
	int c = 0;
	int idx = 0;
	for (int i = 0; i < v.size() - 1; i++) {
		if (v[i] == v[i + 1]) {
			c++;
		}
		else {
			b = max(b, c);
			p.first = v[i];
			p.second = b;
			idx = v[i]++;
			c = 0;
		}
	}
	b = max(b, c);
	b++;
	p.first = idx++;
	p.second = b;
	cout << p.first << " " << p.second << '\n';
	return p;
	
}


int main() {
	pair<int, int> s;
	s = sol();
	cout << s.first << "  " <<  s.second << '\n';
	return 0;
}

//int main() {
//	pair<int, int> p;
//	vector<int> v{1,2,3,4,4,4,4};
//	int b = 0;
//	int c = 0;
//	for (int i = 0; i < v.size() - 1; i++) {
//		if (v[i] == v[i + 1]) {
//			c++;
//		}
//		else { 
//			b = max(c, b);
//			c = 0;
//			p.first = v[i];
//			p.second = b;
//		}
//	}
//	cout << "number is: " << p.first << " and its count is " << p.second << '\n';
//	return 0;
//	
//}
//
