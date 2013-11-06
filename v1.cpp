#include <iostream>
#include <vector>

int main() {
  std::vector<int> v{-99, 0, 42, 3, -1, 6}; // uniform initialization
  for (const auto & iter : v) { // auto, range-based for
    std::cout << " " << iter;
  }
  std::cout << std::endl;
  return 0;
}
