#pragma once

#include <algorithm>

template <typename It, typename Func>
static void insertionsort(It begin, It end, Func F) {
	if (begin == end) return;

	It marker1 = begin;
	It marker2 = marker1++;

	It border = marker1;
	
	while (border != end) {
		auto current = *marker1;

		while (marker1 != begin && F(current,*marker2)){
			*(marker1--) = *(marker2--);
		}

		*marker1 = current;

		marker2 = border++;
		marker1 = border;

	}

}

template<typename It, typename F>
static It my_partition(It begin, It end, F f) {

	while (begin < end) {
		if (f(*begin)) {
			++begin;		
		} else 

		if (!f(*(end-1))) {
			--end;
		} else {
			auto temp = *begin;
			*begin = *(end-1);
			*(end-1) = temp;
		}
	}
	
	return begin;
}	


template <typename It, typename Func>
void quicksort(It begin, It end, Func F) {
	if (end-begin <= 10) {
		return insertionsort(begin, end, F);
	}

	It middle = begin + (end-begin)/2;

	auto temp = *middle;
	*middle= *(end-1);
	*(end-1) = temp;

	It pivot = my_partition(begin, end-1, [&](const auto& element) {
			return F(element, *(end-1));
	});
	
	temp = *pivot;
	*pivot = *(end-1);
	*(end-1) = temp;

	quicksort(begin, pivot, F);
	quicksort(pivot+1, end, F);

}

