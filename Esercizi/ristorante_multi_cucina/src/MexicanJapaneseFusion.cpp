#include "MexicanJapaneseFusion.hpp"
#include <iostream>

MexicanJapaneseFusion::MexicanJapaneseFusion(string name, string address, int spiceLevel, bool hasTatami) : MexicanRestaurant(name, address, spiceLevel), JapaneseRestaurant(name, address, hasTatami), Restaurant(name, address) {
  }

void MexicanJapaneseFusion::describeCuisine(){
  cout << "A unique fusion of Mexican and Japanese cuisines.\n";
}

void MexicanJapaneseFusion::displaySpeciality(){
  cout << "Our specialties combine both cuisines - try our Sushi Tacos and Wasabi Guacamole!\n";
}