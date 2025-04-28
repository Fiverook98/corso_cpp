#include "Restaurant.hpp"
#include <iostream>

Restaurant::Restaurant(string n, string addr) :
name(n),
address(addr){}

void Restaurant::displayInfo(){
  cout << "The " << name << "'s address is: " << address << endl;
}

void Restaurant::describeCuisine(){
  cout << "This restaurant serves various types of cousines.\n";
}

void Restaurant::addMenuItem(MenuItem item){
  menu.push_back(item);
}

void Restaurant::displayMenu(){
  cout << name << "'s Menu:\n";
  for (auto& item : menu){
    item.display();
  }
}