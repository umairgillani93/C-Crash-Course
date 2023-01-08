// Structure: used for user-defined datatypes
// Define structure
// Size of Structure
// Used to defined things having multiple values and attributes; consider example of a Rectangle

#include <bits/stdc++.h>
using namespace std;

struct Rectangle {
	int len;  // takes 2-bytes
	int breath; // takes 2-bytes
};

struct Complex {
	// defining complex number using Structure
	// a + ib -> a, b are the real numbers 
	// ib -> collectively is an immaginary number
	int real;
	int img;

};

struct Student {
	int age; // student's age
	char cls[10]; // student's class
	char first[10]; // first name
	char last[10]; // last name
	char dept[20]; // department
	char address[50]; // address
	
	// memory consumed in bytes; age = 4, cls = 10, first = 10, second = 10, dept = 20, address = 50;
	// 4 + 10 + 10 + 10 + 20 + 50 = 104 bytes

}


int main() {
	struct Rectangle r{10, 15}; // declare + initialize the structure
	cout << r.len << '\n';
	cout << r.breath << '\n';
	cout << "Area from struct is: " << r.len * r.breath << '\n';
	return 0;

}
