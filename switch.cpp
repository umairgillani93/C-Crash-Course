#include<iostream>
#include<string>
#include<stdlib.h>
#include<math.h>
using namespace std;

int main() {
  int x, y;
  char op;

  cout << "Enter integers (x) and (y): " << "\n";
  cin >> x >> y;
  cout << "Enter operations (OP): " << "\n";
  cin >> op;

  switch (op) {
    case '+': cout << "Result is sum " << x+y << "\n"; break;
    case '-': cout << "Result is difference" << x-y << "\n"; break;
    case '*': cout << "Result is product" << x*y << "\n"; break;
    case '/': cout << "Result is division" << x/y << "\n"; break;
    default: cout << "Invalid Operation" << "\n";

  }
      
}
