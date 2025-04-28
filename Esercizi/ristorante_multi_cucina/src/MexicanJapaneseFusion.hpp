#ifndef MEXICAN_JAPANESE_FUSION_HPP
#define MEXICAN_JAPANESE_FUSION_HPP

#include "MexicanRestaurant.hpp"
#include "japaneseRestaurant.hpp"
#include "Restaurant.hpp"

class MexicanJapaneseFusion: public MexicanRestaurant, public JapaneseRestaurant {
public:
  MexicanJapaneseFusion(string name, string address, int spiceLevel, bool hasTatami);
  void describeCuisine();
  void displaySpeciality();
};

#endif