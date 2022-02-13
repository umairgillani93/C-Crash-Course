#include<iostream>
#include<string>
using namespace std;

int main(){
  int m, n;
  cout << "Enter (m) and (n): " << "\n";
  cin >> m >> n;

  cout << (m < n ? m : n) << " is the minimum integer" << "\n";
} 
