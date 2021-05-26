#include "ura.hpp"
#include <iostream>

// U main datoteci mozete testirati vas kod na proizvoljan nacin.

int main(int argc, char* argv[]) {

	const char* s = "Wow";
	std::cout << *s << std::endl;
	std::cout << *(++s) << std::endl;
	std::cout << *(++s) << std::endl;

}
