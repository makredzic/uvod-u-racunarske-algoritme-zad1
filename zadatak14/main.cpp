#include "ura.hpp"
#include <vector>
#include <iostream>

// U main datoteci mozete testirati vas kod na proizvoljan nacin.

int main(int argc, char* argv[]) {

	std::vector<int> v{4,-1,5,6,0,-2,-4,-3,2};
	//                 4 -1 5 6 2 -2 -4 -3 0
	//                 -3 -1 5 6 2 -2 -4 4 0
	//                 -3 -1 -4 6 2 -2 5 4 0
	//                 -3 -1 -4 -2 2 6 5 4 0

	quicksort(v.begin(), v.end());

	for (int i = 0; i < v.size(); i++) std::cout << v[i] << " ";
	std::cout << std::endl;


	return 0;
}
