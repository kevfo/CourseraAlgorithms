#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::vector;

long long lastDigitFibbo(long long a) {
  vector<long long> store(a);
  store[0] = 0;
  store[1] = 1;

  for (long long i = 2; i < a; i++) {
    store[i] = (store[i - 1] + stpre[i - 2]) % 10;
  }
  return store[a];
}

int main() {
  long long a;
  cin >> a;

  cout << lastDigitFibbo(a) << "\n";
  return 0;
}
