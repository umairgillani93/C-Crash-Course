// Gates operations in C++ 
// &, |, ^, ~
#include<iostream>
#include<string>
using namespace std;

int main(){
  int x, y;
  cout << "Enter two numbers: ";
  cin >> x >> y;
  cout << "x is: " << x << " y is: " << y << "\n";
  x = x ^ y;
  y = x ^ y;
  x = x ^ y;
  cout << "x is: " << x << "y is: " << y << "\n";
  return 0;

}
