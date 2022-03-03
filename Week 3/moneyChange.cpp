#include <iostream>

using std::cout;
using std::cin;

int numCoins(int change) {
  int times;
  while (change > 0) {
    if (change >= 10) {
      change -= 10;
      times += 1;
    } else if (change >= 5) {
      change -= 5;
      times += 1;
    } else {
      times += change;
      change = 0;
    }
  }
  return times;
}

int main() {
  int change;
  cin >> change;
  cout << numCoins(change) << "\n";
  return 0;
}
