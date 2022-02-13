#include<iostream>
#include<string>
using namespace std;

int main(){
  cout << "Enter number to check: " << "\n";
  int num;
  cin >> num;
  
  for (int i = 0; i < num; i++){
    if (num % i == 0) {
      cout << "not prime" << "\n";
    }
    else {
      continue;
    }
  }
  cout << "prime" << "\n";
  return 0;
}
