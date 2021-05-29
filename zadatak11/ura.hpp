#pragma once

#include <algorithm>

// U ovoj datoteci se nalazi funkcija koju trebate implementirati

template <typename It>
void insertionsort(It begin, It end) {
	if (begin == end) return;



	// marker2 pa marker1 u nizu
	// border je element koji dijeli sortirani dio niza od nesortiranog

	It marker1 = begin; 
	It marker2 = marker1++;

	It border = marker1;

	while (border != end) {
		
		//kopija elementa koji treba da se smjesti u sortirani dio niza
		auto current = *marker1;


		// glavna petlja koja pomijera markere
		// ili do pocetka niza
		// ili dok ne naidje na element koji nije manji od current elementa
		while (marker1 != begin && current < *marker2) {
			*(marker1--) = *(marker2--);
		}
		
		// stavljanje izabranog elementa na odgovarajucu lokaciju u sortiranom dijelu niza
		*marker1 = current;
		
		//resetovanje markera na granicu
		//za sljedecu iteraciju
		marker2 = border++;
		marker1 = border;
		
	}


		
}

