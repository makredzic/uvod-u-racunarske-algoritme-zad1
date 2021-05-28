#pragma once

#include <algorithm>

// U ovoj datoteci se nalazi funkcija koju trebate implementirati

template <typename It>
It unique(It begin, It end) {

	if (begin == end ) return end;

	It prev = begin;
	while (++begin != end) {
		if (*prev != *begin) *(++prev) = *begin;
	}

	return ++prev;

}

