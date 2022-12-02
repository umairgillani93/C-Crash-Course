#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
	string cars[5] = {"car1", "car2", "car3", "car4", "car5"};

	string ms[2][2] {{"age1", "age2"},
					{"age3", "age4"}}


	//for(int i = 0; i < sizeof(cars); ++i) {
	//	cout <<  "car at position is" << cars[i] << '\n';

	for(int j = 0; j < sizeof(ms); ++j) {
		cout << ms[j] << '\n';
	}
	}
}
