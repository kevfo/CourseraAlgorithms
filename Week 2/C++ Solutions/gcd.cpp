#include <iostream>

using std::cout;
using std::cin;

long gcd(long a, long b) {
  if (a > b) {a, b = b, a;}
  long r = a % b;

  while (r != 0) {
    a = b;
    b = r;
    r = a % b;
  }
  return b;
}

int main() {
  long a, b;
  cin >> a >> b;
  cout << gcd(a) << "\n";
}
