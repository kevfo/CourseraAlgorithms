#include <iostream>
#include <vector>
#include <algorithm>

using std::cout;
using std::cin;
using std::vector;
using std::sort;

long long solve(vector<long long> a, vector<long long> b) {
  long long answer;
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());

  for (long long i = 0; i < a.size(); i++) {
    answer += a[i] * b[i];
  }
  return answer;
}

int main() {
  long long length, element;
  vector<long long> a1, a2;
  cin >> length;

  for (long long i = 0; i < length; i++) {
    cin >> element;
    a1.push_back(element);
  }
  for (long long i = 0; i < length; i++) {
    cin >> element;
    a2.push_back(element);
  }

  cout << solve(a1, a2) << "\n";

  return 0;
}
