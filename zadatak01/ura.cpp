#include "ura.hpp"
#include <iostream>

#include<stdexcept>


// OBJASNJENJE
// --------------
// potreban je neki brojac koji zadrzava svoju vrijednost kroz pozive rekurzije
// staticna variabla nije moguca jer ce brojac nastavit gdje je stao i za druge pozive divide()
// nacin da se to izbjegne jeste da taj 'brojac' bude argument funkcije
// posto je data deklaracija funkcije bez 3. argumenta, ispravnije je onda samo
// kreirat rekurzivnu funkciju novu koja je pozvana iz glavne funkcije

//static jer ova funkcija treba da bude vidljiva samo u OVOM file-u (odnosno translation unit-u)
static unsigned int divide_recursion(unsigned int a, unsigned int b, unsigned int res = 0) {
	if (b == 0) throw std::runtime_error("Nije moguce dijeljenje sa nulom.");
	if (a < b)	return res;
	return divide_recursion(a-b, b, ++res);
}

unsigned int divide(unsigned int a, unsigned int b) {
	return divide_recursion(a, b);
}

