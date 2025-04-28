#include "MexicanRestaurant.hpp"
#include <iostream>

MexicanRestaurant::MexicanRestaurant(string nme, string addr, int spceLev):
Restaurant(nme, addr),
spiceLevel(spceLev){}

void MexicanRestaurant::describeCuisine(){
  cout << "Authentic Mexican cuisine with spice level " << spiceLevel << " out of 5.\n";
}