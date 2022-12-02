// Calculates the LCM of two numbers
#include <iostream>
#include <string>
using namespace std;

int lcm(int x, int y) {
	for (int i = 2; i < 10; i++) {
		if (x % i == 0 && y % i == 0) {
			return i;
		}
		else {continue;}
	}

	return -1;
}

int main() {
	cout << lcm(10, 15) << '\n';
}
