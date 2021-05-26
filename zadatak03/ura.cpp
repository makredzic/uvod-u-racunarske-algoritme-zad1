#include "ura.hpp"
#include <numeric>

// OBJASNJENJE
// -----------
// Potrebna je neka stalna variabla
// koja ce se inkrementirat sa vrijednoscu elementa iz niza
// isto kao za zadatak 01, static variabla ne bi mogla ovdje
// takodjer, alternativa je da se direktno na 1. element dodaju
// elementi niza 1 po 1 pri svakom pozivu medjutim u zadatku nije jasno receno
// da li se originalni  niz smije mijenjati, s obzirom da je pointer na constantu
// onda ne moze
int sum_recursive(const int* array, int n, int res = 0) {
	if (n == 0) return res;
  res += array[--n];
	return sum_recursive(array, n, res);
}

int sum(const int* array, int n) {
	return sum_recursive(array, n);
}
