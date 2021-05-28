#pragma once

#include <algorithm>

// U ovoj datoteci se nalazi funkcija koju trebate implementirati

template <typename It, typename P>
bool all_of(It begin, It end, P p) {

	It iterator = begin;
	while (iterator != end) {
		if (!p(*iterator)) return false;
    iterator++;
	}

	return true;
}

