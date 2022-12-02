// pointers -> one of the best concepts in C++
// pointers are fast and efficient and make C++ stand out among  other languages
// like Java and Python

#include <iostream>
#include <string>
using namespace std;

int main() {
	string food = "pizza";
	string *ptr = &food;

	int number = 60;
	int *num_ptr = &number;

	cout << "string is " << food << '\n';
	cout << "string reference is " << &food << '\n';
	cout << "string pointer is " << ptr << '\n';

	cout << "Number is: " << number << '\n';
	cout << "Number pointer is: " << num_ptr << '\n';
	cout << "Pointer value is: " << *num_ptr << '\n';

	// lets see some other functionality of pointers
	// declare a pointer
	
	string name = "some name";
	// create a name pointer
	string *namePtr = &name;

	cout << "name is: " << name << '\n';
	cout << "name pointer is: " << namePtr << '\n';
	cout << "pointer value is: " << *namePtr << '\n';

	// lets now change the pointer value and see what happens
	*namePtr = "some new name";
	cout << "name is now:  " << name << '\n';
	cout << "name pointer is now: " << namePtr << '\n';
	cout << "pointer value is now: " << *namePtr << '\n';

	
}	
