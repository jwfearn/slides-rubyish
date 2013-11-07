#include <iostream>
#include <vector>

int main() {
  int arr[] = {-99, 0, 42, 3, -1, 6};
  std::vector<int> v(arr, arr + sizeof(arr) / sizeof(int));
  std::vector<int>::const_iterator end = v.end();
  std::vector<int>::const_iterator iter = v.begin();
  for (; iter != end; ++iter) {
    std::cout << *iter << " ";
  }
  std::cout << std::endl;
  return 0;
}
