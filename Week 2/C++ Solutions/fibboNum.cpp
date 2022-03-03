#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::vector;

long long naive(long long a) {
  return a < 2 ? a : naive(a - 1) + naive(a - 2);
}

long long better(long long a) {
  vector<long long> store(a);
  store[0] = 0;
  store[1] = 1;

  for (long long i = 2; i < a; i++) {
    store[i] = store[i - 1] + store[i - 2];
  }
  return store[a];
}

int main() {
  long long a;
  cin >> a;
  cout << naive(a) << "\n";

  return 0;
}
