#pragma once

#include <algorithm>

// U ovoj datoteci se nalazi funkcija koju trebate implementirati

template <typename It>
void bubblesort(It begin, It end) {

	if (begin == end) return;

	It beginCpy = begin;
	bool swapped = true;

	while (swapped) {
		begin = beginCpy;
		swapped = false;

		while (begin != end) {

			auto current = begin++;
			if (*begin < *current) {
				swapped = true;

				auto temp = *current;
				*current = *begin;
				*begin = temp;
			}

		}

	}
		


}

