#include "ura.hpp"
#include <vector>
#include <iostream>

// U main datoteci mozete testirati vas kod na proizvoljan nacin.

int main(int argc, char* argv[]) {

  std::vector<int> v{9};
  auto it = ::partition(v.begin(), v.end(), [](const int& el){return el%2 == 0;});
  for (int i = 0; i < v.size(); i++) std::cout << v[i] << " ";
  std::cout << std::endl;
  std::cout << "Iterator: " << *it << std::endl;

}
