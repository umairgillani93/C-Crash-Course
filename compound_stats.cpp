#include<iostream>
#include<string>
#include<stdlib.h>>
using namespace std;

int main(){
  char ans;
  cout << "Are you Enrolled (y/n)" << "\n";

  cin >> ans;
  if (ans == 'Y' || ans == 'y'){
    cout << "Yes, you are enrolled" << "\n";
  }
  else {
    cout << "NO, you are not enrolled" << "\n";
  }
  
}
