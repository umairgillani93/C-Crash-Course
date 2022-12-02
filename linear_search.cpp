#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
	for(int i=0; i<5; ++i) {
		cout << "outer is: " << i << '\n';

		for(int j=0; j<5; ++j) {

			cout << "inner j is: " << j << '\n';
		}

	}
}
