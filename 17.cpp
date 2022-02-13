// The While loop
#include<iostream>
#include<string>
using namespace std;

int main(){
	int x;
	cout << "Enter value for x: \n";
	cin >> x;
	
	int loop_count;
	loop_count = 0;
	while (loop_count < x){
		cout << "Loop count: " << loop_count << "\n";
		loop_count++;
	}
	return 0;
}
