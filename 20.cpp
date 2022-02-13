// while loop example
#include<iostream>
#include<string>
using namespace std;

int main(){
	cout << "Enter number: \n";
	int n;
	cin >> n;
	int sum = 0;
	int init_num = 0;
	while (init_num <= n){
		cout << "sum: " << sum << endl;
		sum += init_num;
		init_num ++;
	}
	cout << "Final sum is: " << sum << "\n";
}
