// Quadractice Equation
#include<iostream>
#include<string>
using namespace std;

int main(){
  // quadratic equation has 3 variables
  // a, b and c
  // y = x^2 - 6x -7
  float y;
  int x;
  cout << "Enter value of x: ";
  cin >> x;
  y = (x*x) - (6*x) - 7;
  cout << "Y is: " << y << endl;
  return 0;
}
