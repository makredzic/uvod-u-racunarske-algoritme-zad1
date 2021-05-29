#pragma once

#include <algorithm>

#include <queue> // potrebno za queue
#include <type_traits> // potrebno za decltype koji odredi tip elemenata koji idu u queue



template <typename It>
void mergesort(It begin, It end) {

	if (begin == end-1) return;

	// begin1 na pocetak niza
	// end1 na 1 element iza kraja prve polovice niza, to jest na sredinu niza, to jest na 1. element druge polovice niza
	It begin1 = begin;
	It end1 = begin + (end-begin)/2;


	// begin2 je 1. element druge polovice niza, to jest element u sredini cijelog niza
	// end2 je kraj je 1 element poslije kraja niza
	It begin2 = end1;
	It end2 = end;

	// rekurzivni poziv
	mergesort(begin1, end1);
	mergesort(begin2, end2);

	// SKICIRANO BEGINOVI I ENDOVI NA STA USTVARI POKAZUJU
	//
	// b1    (end1) b2         end2
	// |           |            |
	// V           V            V
	// 2  4  5  6  1  2  8  20
	// 
	// broj elemenata u nizu citavom (sto je iznad 8) je prvo 2 i onda kako se vraca iz rekurzije
	// dupla se njegova velicina gdje su uvijek lijeva i desna polovica sortirane same za sebe
	//
	// npr.
	// 2 4 5 6 - sortirano
	// 1 2 8 20 - sortirano
	// 
	

// Algoritam sortiranja (odnosno merge-a) dvije polovice (koje su u pocetku po 1 element ali se duplaju)
//
// Ovaj algoritam koristi queue
// Ispituje se odnos elementa na koji begin1 pokazuje i begin2
//
// !! MANJI element od ta 2 se UVIJEK gura na queue !!
//
// Ako je begin1 (element iz lijeve polovice) MANJI -> iz queue-a se pop-a element koji se zapisuje gdje trenutno pokazuje begin1
// Ako je begin2 manji (ili jednak) onda se samo pomijera marker (i naravno gura item na queue ali to vec stoji iznad)
//
// Koji begin je manji, taj begin se pomijera

	auto element = *begin; // postoji ISKLJUCIVO da decltype odredi tip elementa za queue
	std::queue<decltype(element)> q;

	// Glavna petlja koja se 'vrti'
	// dok ili prvi begin ne dodje do sredine niza
	// ili drugi begin (koji je na sredini niza) ne dodje do kraja
	while (begin1 != end1 && begin2 != end2) {
		
		// poredjenje elemenata na koje pokazuju begin1 i begin2
		if (*begin1 < *begin2) {
			if (!q.empty()) {
				q.push(*begin1);
				auto temp = q.front(); // q.front() vraca referencu, zato se ovdje forsira kopiranje (nemam pojma jel ovo neophodno)
				*begin1 = temp;
				q.pop();
			}
			begin1++;
		} else {

			q.push(*begin2);
			begin2++;
		}

	}

	// While prestaje kad jedan od 2 begina dodje do svog kraja
	// Tada se begin koji nije dosao do kraja pomijera do kraja dok se elementi na koje pokazuje guraju na queue
	
	if (begin1 != end1) {
		auto temp = begin1; // da ne bi se begin1 inkrementirao jer je bitno dokle je on dosao za zadnju while petju
		while (temp != end1) q.push(*(temp++));
	} else {
		auto temp = begin2;
		while (temp != end2) q.push(*(temp++));
	}

	// Svi preostali elementi u queue se pisu na mjestu dokle je doslo begin1
	while(!q.empty()) {
		auto temp = q.front();
		*(begin1++) = temp;
		q.pop();
	}

	 
}

