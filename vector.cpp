#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
  vector<int> v1;
  long end = 100;
  for (int i = 0; i <= end; i++){
    v1.push_back(i);
  }

  for (int j = 0; j <= v1.size(); j++) {
    cout << "item is: " << v1[j] << "\n";
  }
  cout << "vector begins" << v1.begin() << "\n";
  cout << "vector ends" << v1.end() << "\n";
  return 0;
  
    
}
  
