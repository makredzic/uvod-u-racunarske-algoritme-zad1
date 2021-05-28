#include "ura.hpp"
#include <vector>
#include <iostream>

// U main datoteci mozete testirati vas kod na proizvoljan nacin.

int main(int argc, char* argv[]) {
  
  std::vector<int> t{1,3,13,7,19};
  if (::all_of(t.begin(), t.end(), [](const auto& el){return el%2;})) 
    std::cout << "Svi su neparni.\n"; else
    std::cout << "Nisu svi neparni.\n";

  return 0;
}
