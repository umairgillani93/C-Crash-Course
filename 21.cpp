#include<iostream>
#include<string>
using namespace std;

int main(){
	cout << "Enter number: " << "\n";
	int number;
	cin >> number;

	if (number > 1){
		for (int i=2; i<=number; i++){
			if(number%i == 0) {
				cout << number << " is not a prime number" << "\n";
				break;
			}
			else
			{ cout << number << " is a prime number" << "\n"; }
		}
	}

}
