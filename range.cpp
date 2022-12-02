#include <iostream>
#include <string>
using namespace std;

int main() {
	string str = "some random string";
	int n = 10;

	for (auto c: str) 
		cout << "[" << c << "]" << '\n';

	for (auto i: n)
		cout << i << '\n';

}
