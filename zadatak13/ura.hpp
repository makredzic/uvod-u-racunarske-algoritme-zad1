#pragma once

#include <algorithm>


template <typename It>
void mergesort(It begin, It end) {

	if (begin == end-1) return;

	It middle = begin + (end-begin)/2;

	mergesort(begin, middle);
	mergesort(middle, end);

	while (begin != middle && middle != end) {

		if (*begin <= *middle) begin++; else {
			
			auto currentIt = middle;
			auto currentValue = *middle;

			//shift elements between begin and middle
			while (currentIt != begin) {
				*currentIt = *(currentIt-1);
				--currentIt;
			}

			// set begin to original(before shifting) middle value
			*begin = currentValue;

			//move begin and middle iterators by 1
			begin++;
			middle++;
		}
	}

}

