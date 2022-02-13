#include<iostream>
#include<string>
using namespace std;

int main(){
	int sum_ = 0;
	cout << "Enter the number to take sum to: " << "\n";
	int number;
	cin >> number;

	for (int i=0; i<=number; i++){
		sum_ += i;
	}

	cout << "sum till n is: " << sum_ << "\n";



}
