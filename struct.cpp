#include <iostream>
#include <string>
using namespace std;

int main() {
	struct {
		int num; 
		string name; 
		float float_num;
	} myStruct1, myStruct2;

	myStruct1.num = 3;
	myStruct2.num = 4;

	cout << myStruct1.num << '\n';
	cout << myStruct2.num << '\n';

}
