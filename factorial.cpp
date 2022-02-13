#include<iostream>
#include<string>
using namespace std;

int factorial_recurse(int n) {
  if (n==0){return 1;}
  else if (n==1) {return 1;}
  else {
    return n*factorial_recurse(n-1);
  }
}


int main(){
  cout << "Factorial is: " << factorial_recurse(5) << "\n";
}
