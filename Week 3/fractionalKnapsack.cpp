#include <iostream>
#include <vector>
#include <algorithm>

using std::cin;
using std::cout;
using std::vector;
using std::sort;

struct Item {
  double value;
  double weight;
};

bool VWratio(Item a, Item b) {
  return (a.value / a.weight) > (b.value / b.weight);
}

double solve(vector<Item> items, double maxCap) {
  double answer;
  sort(items.begin(), items.end(), VWratio);

  while (maxCap > 0) {
    for (auto it = items.begin(); it != items.end(); it++) {
      if (it->weight <= maxCap) {
        answer += it->value;
        maxCap -= it->weight;
      } else {
        answer += (maxCap / it->weight) * it->value;
        maxCap = 0;
      }
    }
  }
  return answer;
}

int main() {
  double maxCap, value, weight;
  long numItems;
  cin >> numItems >> maxCap;

  vector<Item> store;
  for (long i = 0; i < numItems; i++) {
    cin >> value >> weight;
    Item item; item.value = value; item.weight = weight;
    store.push_back(item);
  }

  cout.precision(7);
  cout << solve(store, maxCap) << "\n";
  return 0;
}
