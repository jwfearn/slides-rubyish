#include <iostream>
#include <vector>

using namespace std;

typedef vector<int> Vec;

int main() {
  int arr[] = {-99, 0, 42, 3, -1, 6};
  Vec v(arr, arr + sizeof(arr) / sizeof(int));
  Vec::const_iterator end = v.end();
  for (Vec::const_iterator iter = v.begin(); iter != end; ++iter) {
    cout << " " << *iter;
  }
  cout << endl;
  return 0;
}
