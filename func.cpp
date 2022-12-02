// Funcitons in C++
#include <iostream>
#include <string>
using namespace std;

string string_func() {
	string value = "some value";
	return value;

}

void display_string(string s) {
	for(int i = 0; i < s.length(); ++i) {
		cout << s[i] << '\n';
	}
	
}

// arguments passed by values
void call(string n, int age) {
	cout << "name is: " << n << " and I'm " << age << "years old" <<  '\n';
}

// arguments passed by references
void swap_nums(int &x, int &y) {
	int z = x;
	x = y;
	y = z;

}


int main() {
//	cout << str << '\n';
	display_string(string_func());
	return 0;

}
