#pragma once

#include <algorithm>
#include <string>

#include "sort.hpp"

// U ovoj datoteci se nalazi potpis funkcije koju trebate implementirati
// Smijete prosiriti implementaciju i dodati dodatne funkcije koje su vam
// potrebne.
// Potrebno je dodati implementaciju algoritama sortiranja koje cete koristiti.
// U potpisu tim algoritama uzeti lambda izraz kao relaciju poredenja.
// U funkciji complicated_sort pozovite algoritme soritranja koje smatrate
// da su potrebni sa odgovarajucim lambda izrazima.

struct Tim {
  std::string naziv;
  int bodovi;
  int primljeniGolovi;
  int postignutiGolovi;

	Tim() = default;
	Tim(const std::string& s, int bod, int primGol, int postGol) : naziv{s}, bodovi{bod}, primljeniGolovi{primGol}, postignutiGolovi{postGol} {}

	Tim(const Tim& other) : naziv{other.naziv}, bodovi{other.bodovi}, primljeniGolovi{other.primljeniGolovi}, postignutiGolovi{other.postignutiGolovi}{}

	Tim(Tim&& other) {
		naziv = std::move(other.naziv);
		bodovi = other.bodovi;
		primljeniGolovi = other.primljeniGolovi;
		postignutiGolovi = other.postignutiGolovi;
		
	}

	Tim& operator=(const Tim& other) {
		naziv = other.naziv;
		bodovi = other.bodovi;
		primljeniGolovi = other.primljeniGolovi;
		postignutiGolovi = other.postignutiGolovi;
		return *this;
	}

	Tim& operator=(Tim&& other) {
		naziv = std::move(other.naziv);
		bodovi = other.bodovi;
		primljeniGolovi = other.primljeniGolovi;
		postignutiGolovi = other.postignutiGolovi;
		return *this;
	}

	/*
	template <typename U>
	Tim(U&& other) : naziv{std::forward<U>(other.naziv)}, bodovi{other.bodovi},
		primljeniGolovi{other.primljeniGolovi}, postignutiGolovi{other.postignutiGolovi} {}

		*/


};

template <typename It>
void complicated_sort_std(It begin, It end) {
	
  std::sort(begin, end, [](const Tim& lhs, const Tim& rhs) {
		return lhs.naziv < rhs.naziv;
  });

	
  std::stable_sort(begin, end, [](const Tim& lhs, const Tim& rhs) {
		return lhs.postignutiGolovi > rhs.postignutiGolovi;
  });

  std::stable_sort(begin, end, [](const Tim& lhs, const Tim& rhs) {
		return (lhs.postignutiGolovi - lhs.primljeniGolovi) <
		(rhs.postignutiGolovi - rhs.primljeniGolovi);
  });

  std::stable_sort(begin, end, [](const Tim& lhs, const Tim& rhs) {
		return lhs.bodovi < rhs.bodovi;
  });

};

template <typename It>
void complicated_sort(It begin, It end) {
	
  quicksort(begin, end, [](const Tim& lhs, const Tim& rhs) {
		return lhs.naziv < rhs.naziv;
  });

	
  insertionsort(begin, end, [](const Tim& lhs, const Tim& rhs) {
		return lhs.postignutiGolovi > rhs.postignutiGolovi;
  });

  insertionsort(begin, end, [](const Tim& lhs, const Tim& rhs) {
		return (lhs.postignutiGolovi - lhs.primljeniGolovi) <
		(rhs.postignutiGolovi - rhs.primljeniGolovi);
  });

  insertionsort(begin, end, [](const Tim& lhs, const Tim& rhs) {
		return lhs.bodovi < rhs.bodovi;
  });

};
