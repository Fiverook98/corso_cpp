#include "MenuItem.hpp"
#include <iostream>

MenuItem::MenuItem(string nam, double pric):
name(nam),
price(pric){}

void MenuItem::display(){
  cout << name << " - $" << price << endl;
}