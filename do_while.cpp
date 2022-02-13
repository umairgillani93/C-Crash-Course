#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;

void func1(){
  string a;
  cout << "type of a is " << typeid(a).name() << "\n";
  cin >> a;
  cout << "type of a is " << typeid(a).name() << "\n";
}
void func(){
  unsigned char a = 0;
  cin >> a;
  cout <<"type is " <<  typeid(a).name() << "\n";
}

void simple_while(){
  string a;
  cout << "Enter character: ";
  cin >> a;
  while ((a != "y") || (a != "Y")){
    cin >> a;
  }
  cout << "Terminating while loop.. " << "\n";
  
}

int main(){
  //string a;
  //do {
  //  cout << "Enter your choice: (y/n)" << "\n";
  //  cin >> a;
  //}
  //while ((a != "y") || (a != "Y"));
  //cout << "Terminated " << "\n";
  simple_while();
}
