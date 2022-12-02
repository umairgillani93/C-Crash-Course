#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int linear_search(arr[], idx) {
	int i = 0;
	while (i < sizeof(arr) / sizeof(arr[0])) {
		if (arr[i] == idx) 
			return i;
		else
			++i;
	}
	cout << "item not found" << '\n';
	}
}

int main() {
	int arr[] = {1,2,3,4,5};
	int n = 3;

	cout << linear_search(arr, n) << endl;

}

