#pragma once

#include <algorithm>

// U ovoj datoteci se nalazi funkcija koju trebate implementirati
//

template<typename It>
static void insertion_k(It begin, int n, int k) {

	for (int i = k; i < n; i+= k ) {
		for (int j = i; j >= k && *(begin+j) < *(begin+j-k); j-=k) {
			auto temp = *(begin+j);
			*(begin+j) = *(begin+j-k);
			*(begin+j-k) = temp;
		}
	}
	

}

template <typename It>
void shellsort(It begin, It end) {
	int n = end - begin;
	for (int k = n/2; k != 1; k/=2)  {
		for (int i = 0; i < k; i++) insertion_k(begin+i, n-i, k);
	}
	insertion_k(begin, n, 1);
}

