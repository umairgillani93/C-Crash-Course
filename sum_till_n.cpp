#include<iostream>
#include<string>
#include<typeinfo>
using namespace std;

int main() {
  int n;
  cout << "Enter (N) till you want to find the sum" << "\n";
  cin >> n;
  int sum = 0;

  for (int i=0; i<=n; i++) {
    sum += i;
    cout << sum << "\n";
    //cout << typeid(sum).name() << "\n";
  }
  cout << "Sum till " << n << " is: " << sum << "\n";
  return sum;
}
