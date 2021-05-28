#pragma once

#include <algorithm>

// U ovoj datoteci se nalazi funkcija koju trebate implementirati

template <typename It, typename P>
bool none_of(It begin, It end, P p) {
	
	It iter = begin;
	while (iter != end){
		if (p(*iter)) return false;
		iter++;
	}
	return true;
}

