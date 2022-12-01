#include <iostream>
#include <string>
using namespace std;

int main() {
	string name = "Name";
	cout << "Full name is: " << name << '\n';
	cout << "string  length is: " << name.length() << '\n'; // return the length of string
	cout << "string  length is: " << name.size() << '\n';   // return the size / length of string
	
	// indexing operations
	cout << " string at first index: " << name[0] << '\n';
	// string at last idnex 
	cout << "string at last index: " << name[-2] << '\n';

	// we can even change the strings at certain indexes
	// which shows strings are mutable in C++, unlike python!
	//
	name[0] = 'j';

	cout << name << '\n';
	// slicing strings using 'substr' method
	
	string sub_str = name.substr(3,name.length());
	cout << sub_str << '\n';

	string fullName;
	// takes the entire line from user, without breaking on whitespace like cin
	getline(cin, fullName);

	cout << "full name is:  " << fullName << '\n';
	cout << "full name is: " << Name


	return 0;
	

}
