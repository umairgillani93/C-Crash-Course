// min of all integers
#include<iostream>
using namespace std;

int main(){
  int x1, x2, x3, x4;
  cin >> x1 >> x2 >> x3 >> x4;
  
  int min;
  min = x1;

  if (x2 < min){
	  min = x2;
  }
  
  if (x3 < min){
	  min = x3;
  } 
  if (x4 < min) {
	  min = x4;
  }

  cout << "minimun number is: " << min << "\n";
}
