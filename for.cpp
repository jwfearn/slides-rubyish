#include <iostream>
#include <vector>

int main() {
  for (const auto iter : {-99, 0, 42, 3, -1, 6}) {
    std::cout << iter << " ";
  }
  std::cout << std::endl;
  return 0;
}
