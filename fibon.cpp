#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;

int main(int n){
  int last;
  cout << "Enter last integer for Fibonacci numbers: " << "\n";
  cin >> last;

  if (last == 0 || last == 1) {
    cout << last << "\n";
  }
  else {
    cout << main(n-1) << " : " << main(n-2) << "\n";
  }

}


