// Switch statment in C++
#include<iostream>
using namespace std;

int main(){
  int x, y;
  cin >> x >> y;
  char operation;
  
  cout << "Choose operation [+, -, /, *]: \n";
  cin >> operation;

  switch (operation) {
	  case '+': cout << x+y << endl; break;
	  case '-': cout << x-y << endl; break;
	  case '/': cout << x/y << endl; break;
	  case '*': cout << x*y << endl; break;
	  default : cout << "Invalid Operation \n";
  }
}	
