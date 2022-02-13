// Calculates the roots of Quadratice Equation 
#include<iostream>
#include<string>
#include<math.h>
using namespace std;

int main(){
  double x1,x2,a,b,c;
  cin>>a;
  cin>>b;
  cin>>c;

  x1 = (-b + sqrt((b*b - 4*a*c))) / (2*a);
  x2 = (-b - sqrt((b*b - 4*a*c))) / (2*a);

  cout << "roots: " << x1 << x2 << endl;
  return 0;

}
