#include "ura.hpp"
#include <vector>
#include <iostream>


void print(const std::vector<Tim>& v) {
	std::cout << "|   Tim   | Bodovi | Primljeni | Postignuti |\n";
	for (int i = 0; i < v.size(); i++)
	{
		std::cout << " " << v[i].naziv << "\t" << v[i].bodovi << "\t" << v[i].primljeniGolovi << "\t\t" << v[i].postignutiGolovi;
		std::cout <<std::endl;
	}
	std::cout <<std::endl;
}

int main(int argc, char* argv[]) {

	
	std::vector<Tim> v{
		Tim{"Barcelona", 20, 3, 10},
		Tim{"Manchester", 13, 10, 3},
		Tim{"Real Madrid", 20, 4, 20},
		Tim{"Wow Teamm", 20, 4,21},
		Tim{"Sloboda", 13, 11, 5},
		Tim{"Sloboda", 13, 10, 4},
		Tim{"Sloboda", 14, 10, 4},
		Tim{"Sloboda", 13, 10, 5},
		Tim{"Sloboda", 14, 11, 6},
		Tim{"Bloboda", 13, 11, 5}
	};
	


	std::cout << "---BEFORE SORTING---\n";
	print(v);

	std::cout << "---AFTER SORTING---\n";
	complicated_sort(v.begin(), v.end());
	print(v);

	std::cout << "--- STD SORTING---\n";
	complicated_sort_std(v.begin(), v.end());
	print(v);



	return 0;
}
