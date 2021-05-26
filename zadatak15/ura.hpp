#pragma once

#include <algorithm>
#include <string>

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
};

template <typename It>
void complicated_sort(It begin, It end) {
  // std::sort(begin, end, [](const Tim& lhs, const Tim& rhs) {
  //   return lhs.naziv < rhs.naziv;
  // });
  // std::stable_sort(begin, end, [](const Tim& lhs, const Tim& rhs) {
  //   return lhs.postignutiGolovi < rhs.postignutiGolovi;
  // });
  // std::stable_sort(begin, end, [](const Tim& lhs, const Tim& rhs) {
  //   return (lhs.postignutiGolovi - lhs.primljeniGolovi) <
  //          (rhs.postignutiGolovi - rhs.primljeniGolovi);
  // });
  // std::stable_sort(begin, end, [](const Tim& lhs, const Tim& rhs) {
  //   return lhs.bodovi < rhs.bodovi;
  // });
}

