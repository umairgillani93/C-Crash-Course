#include <iostream>
#include <string>
using namespace std;

struct Car {
	int model;
	string name;
	string comp;

int show() {
	cout << "This is struct class\n";
	return 0;
}

} c1;

int main() {
	c1.model = 2022;
	c1.name = "bmw";
	c1.comp = "toyota";
	cout << c1.model << '\n';
	cout << c1.name << '\n';
	cout << c1.comp << '\n';

	cout << c1.show() << '\n';

}
