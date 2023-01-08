#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Card {
	// A card has 3 parameters
	// face, shape and color
	int face; // takes 2-bytes
	int shape; // takes 2-bytes
	int color; // takes 2-bytes; total memory of Struct is 6-bytes
};

int main() {
	// declare and initialize a single Card
	struct Card c;
	c.face = 1;
	c.shape = 0;
	c.color = 0;

	// initialize Array of Cards (structs)
	struct Card deck[2] = {{1, 0, 0}, {1, 0, 1}};

	cout << "Face of first: " << deck[0].face << '\n';
	cout << "Shape of second: " << deck[1].shape << '\n';
	cout << endl;
	
	// C language style
	printf("%d", deck[0].face);
	printf("\n");
	printf("%d", deck[1].shape);
	printf("\n");

	return 0;
	
}
