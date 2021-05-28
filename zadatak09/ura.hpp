#pragma once

#include <algorithm>

// U ovoj datoteci se nalazi funkcija koju trebate implementirati

template <typename It>
void selectionsort(It begin, It end) {

	It current = begin;
	It min = begin;

	while (current != end) {
		begin = current;
		min = current;

		while(begin != end){
			if (*begin < *min) min = begin;
			begin++;
		}

		auto temp = *current;
		*current = *min;
		*min = temp;
		current++;
	}

}

