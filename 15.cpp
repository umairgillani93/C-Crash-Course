// ? : Statment in C++
#include<iostream>
#include<string>
using namespace std;

int main(){
	int x,y;
	cin >> x;
	cin >> y;
	cout << (x < y ? x : y) << " is the minimum number\n";
	return 0;
}
