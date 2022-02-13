#include<iostream>
#include<string>
using namespace std;

int main(){
  cout << "Enter the number, you want to find sum till" << "\n";
  int n;
  cin >> n;

  int sum = 0;
  int cnt = 0;
  while (cnt <= n){
    sum += cnt;
    cnt += 1;
  }
  cout << "sum is " << sum << "\n";

}
