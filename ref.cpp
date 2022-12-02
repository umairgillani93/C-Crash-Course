// reference variables in C++
// refererece variables should must be referecne to an existing variable
// varialbe and ref. variable shouldn't have the same name
#include <iostream>
#include <string>
using namespace std;

int main() {
	string food = "pizza";
	string &food_ref = food;

	cout << food << '\n';
	cout << &food_ref << '\n';

	cout << food << '\n';
	cout << food_ref << '\n';

	string new_var = "some var";
	string &new_var_ref = new_var;
	cout << new_var << '\n';
	cout << &new_var_ref << '\n';


}
