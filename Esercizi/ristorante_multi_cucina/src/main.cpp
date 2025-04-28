#include <iostream>
#include "MexicanRestaurant.hpp"
#include "japaneseRestaurant.hpp"
#include "MexicanJapaneseFusion.hpp"

using namespace std;

int main() {
    cout << "Testing Restaurant Inheritance Hierarchy:" << endl;
  MexicanRestaurant mexican = MexicanRestaurant("La Casa", "123 Spice Lane", 4);
  JapaneseRestaurant japanese = JapaneseRestaurant("Sakura", "456 Sushi Road", true);
  MexicanJapaneseFusion mexjap = MexicanJapaneseFusion("Fusion Festa", "789 Fusion Ave", 3, true);
  mexican.displayInfo();
  mexican.describeCuisine();
  japanese.displayInfo();
  japanese.describeCuisine();
  mexjap.displayInfo();
  mexjap.displaySpeciality();
  mexican.addMenuItem(MenuItem("Tacos", 8.99));
  mexican.addMenuItem(MenuItem("Enchiladas", 12.99));
  japanese.addMenuItem(MenuItem("Sushi Roll", 14.99));
  japanese.addMenuItem(MenuItem("Ramen", 11.99));
  mexjap.addMenuItem(MenuItem("Sushi Tacos", 15.99));
  mexjap.addMenuItem(MenuItem("Wasabi Guacamole", 7.99));
  mexican.displayMenu();
  japanese.displayMenu();
  mexjap.displayMenu();
    return 0;
}
