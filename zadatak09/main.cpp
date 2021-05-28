#include "ura.hpp"
#include <iostream>
#include <vector>

// U main datoteci mozete testirati vas kod na proizvoljan nacin.

int main(int argc, char* argv[]) {

	std::vector<int> v{-10, -9, -8, -7, -6, -5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	
	selectionsort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++) std::cout << v[i] << " ";
	std::cout << std::endl;

	return 0;
}
