#include <iostream>
#include <vector>

using namespace std;

typedef vector<int> Vec;

int main() {
  Vec v{-99, 0, 42, 3, -1, 6};
  for (auto & iter : v) {
    cout << " " << iter;
  }
  cout << endl;
  // cout << "Unicode Characters: I \u2665 \U0001F37A \U0001F4A9" << endl;
  return 0;
}
