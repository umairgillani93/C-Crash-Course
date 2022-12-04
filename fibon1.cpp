#include <iostream>
#include <vector>
using namespace std;

int fibon() {
	int n;
	cin >> n;
	if (n == 0 || n == 1) {
		return n;
	}
	else
		return fibon(n-1);
}
int main() {
	cout << fibon() << '\n';

}

