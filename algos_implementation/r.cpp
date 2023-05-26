#include <iostream>
#include <bits/stdc++.h>
#include <fstream>


using namespace std;

int main() {
	string t;
	ifstream MyString("file.txt");

	while(getline(MyString, t)) {
		cout << t  << '\n';
	}

	return 0;
}
