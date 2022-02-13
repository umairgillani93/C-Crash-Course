// ? : statement in C++
#include<iostream>
#include<string>
using namespace std;

int main(){
	int x;
	int y;
	cout << "Enter Values: " << "\n";
	cin >> x >> y;
	cout << (x > y ? x : y) << " is greater number!\n";
	return 0;
}

