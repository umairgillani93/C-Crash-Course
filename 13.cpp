// Use of statements in C++
#include<iostream>
using namespace std;

int main() {
	int score;
	cout << "Enter scrore: \n";
	cin >> score;

	if (score >= 80){
		cout << "your grade is: [A] \n";
	}
	else if (score >= 75){
		cout << "your grade is [B+] \n";
	}
	else if (score >= 70) {
		cout << "your grade is [B] \n";
	}
	else if (score >= 65) {
		cout << "your grade is [C+] \n";
	}
	else if (score >= 60){
		cout << "your grade is [C] \n";
	}
	else {
		cout << "you have failed the course \n";
	}
}
