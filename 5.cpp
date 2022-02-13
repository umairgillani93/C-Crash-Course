// Type-Casting example in C++
#include<iostream>
#include<string>
using namespace std;

int main(){
  int a = 1500000000;
  int a_product = (a*10) / 10;
  a = 1500000000;
  a = (static_cast<double>(a) * 10) / 10;
  cout << "Result: " <<a_product;
  return 0;
}

