// While loop example
#include<iostream>
#include<string>
using namespace std;

int main(){
  cout << "Enter number: \n";
  int x;
  cin >> x;
  int sum_ = 0;
  for (int i=0; i<=x; i++){
	 sum_ += i;
  }
  cout << "Sum is: " << sum_ << endl;
  return 0;
}
