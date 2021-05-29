#include "ura.hpp"
#include <vector>
#include <iostream>

// U main datoteci mozete testirati vas kod na proizvoljan nacin.

int main(int argc, char* argv[]) {

	std::vector<int> v{5,4,3,2,1,0,-1,-2,-3,-4,-5};
	shellsort(v.begin(), v.end());

	for (int i = 0; i < v.size(); i++) std::cout << v[i] << " ";
	std::cout << std::endl;

	return 0;
}
