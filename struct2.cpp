#include <iostream>
#include <string>

struct Car {
	int model = 2022;
	string name = "bmw";
	string comp = "toyota";
}; 	

int main() {

	Car c1;
	cout << c1.model << '\n';
	cout << c1.name << '\n';
	cout << c1.comp << '\n';
}
