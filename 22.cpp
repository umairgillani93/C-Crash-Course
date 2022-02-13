#include<iostream>
#include<string>
using namespace std;

int main(){
  string s;
  s = "name";
    for (int i=0; i < s.size(); i++){
      cout << "Index: " << i << "Value: " << s[i] << "\n";
    }
  cout << "This is final line" << "\n";
}
