#include "ura.hpp"
#include <stdexcept>
#include <numeric>


// OBJASNJENJE
// ----------
// Isto kao zadatak 01 i 03, potrebna je pomocna neka variabla koja pamti
// rjesenje kroz pozive, staticne variable ne mogu
int min_recursive(const int* array, int n, int res) {
	if (n <= 0) throw std::runtime_error("Niz ne moze biti prazan.");

	if (array[n-1] < res) res = array[n-1];

	if (n == 1) {
		return res;	
	} else return min_recursive(array, n-1, res);

}

int min(const int* array, int n) {
	return min_recursive(array, n, array[n-1]);
}
