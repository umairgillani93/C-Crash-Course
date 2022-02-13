// Type Casting second example
#include<iostream>
#include<string>
using namespace std;

void convert(int a;){
  return float (a);
}

int main(){
 int x = 10;
 cout << "x is: " << x << "\n";
 x = static_cast<float>(x);
 cout << "x is: " << x << "\n";
 return 0;
}

