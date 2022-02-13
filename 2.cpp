// Calculates the Area of Circle 
// Constant Float example  
#include<iostream>
#include<string>
using namespace std;

int main(){
  float radius;
  cin>>radius;
  const float PI = 3.14;
  float area = PI * radius * radius;
  cout << "Area is: " << area << endl;
  return 0;
}
