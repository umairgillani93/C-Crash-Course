// Conditional statements in C++
#include<iostream>
using namespace std;

int main(){
	int x;
	cout << "Enter a number: ";
	cin >> x;

	if (x%2 == 0){
		cout << "X is divisible" << "\n";
	}		
	else {
		cout << "X is not divisible" << "\n";
	}
}
