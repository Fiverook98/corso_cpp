#include "japaneseRestaurant.hpp"
#include <iostream>

JapaneseRestaurant::JapaneseRestaurant(string nam, string addr, bool tatamiAvailable):
Restaurant(nam, addr),
hasTatami(tatamiAvailable){}

void JapaneseRestaurant::describeCuisine(){
  cout << ((hasTatami) ? "Traditional Japanese cuisine with tatami seating available.\n" : "Traditional Japanese cuisine.\n");
}