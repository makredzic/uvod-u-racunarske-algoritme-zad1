#pragma once

#include <algorithm>
#include <iostream>

// U ovoj datoteci se nalazi funkcija koju trebate implementirati

template <typename It, typename P>
It partition(It begin, It end, P p) {


	It it1 = begin;
	It it2 = --end;

	while (it1 < it2) {

		if (p(*it1)) it1++; else
		if (!p(*it2)) it2--; else {
			auto temp = *it1;
			*it1 = *it2;
			*it2 = temp;
		}
		
	}

	
  if (p(*it1)) return ++it1;
    else return it1;
  
}

