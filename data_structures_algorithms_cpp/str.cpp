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

int main() {
	struct Rectangle r{10, 15}; // declare + initialize the structure
	cout << r.len << '\n';
	cout << r.breath << '\n';
	cout << "Area from struct is: " << r.len * r.breath << '\n';
	return 0;

}
