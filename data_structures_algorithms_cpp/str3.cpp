#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {

	char name[] = "madam";

	char name2[5];
	
	for (int i = sizeof(name) / sizeof(name[0]); i > 0; i--) {
		name2[i] = name[i];
	}	
	
	for (int j = 0; j < sizeof(name) / sizeof(name[0]); j++) {
		cout << name2[j] << '\n';
	}	

	return 0;

}

