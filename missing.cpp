#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

int find_missing_number(const vector<int>& num_list) {
  int sum_range = accumulate(begin(num_list), end(num_list), 0);
  int sum_expected_range = ((num_list.front() + num_list.back()) * num_list.size()) / 2;
  return sum_expected_range - sum_range;
}

int main() {
  cout << find_missing_number({1, 2, 3, 5, 6, 7, 8}) << endl; // 4
  cout << find_missing_number({1, 2, 3, 4, 5, 6, 7, 8}) << endl; // 0
  return 0;
}
