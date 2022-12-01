#include <stdio.h>

int add() {
	int x;
	int y;
	int result;
	x = 5;
	y = 10;

	result = x + y;

	return result;
}

int main() {
	int val1 = 15;
	float val2 = 394.34;
	char val3 = 'U';

	printf("value of integer is: %d", val1);
	printf("value of float is: %f", val2);
	printf("value of charater is: %c", val3);
	printf("\n");

	printf(add());

	
}	
