#ifndef MENU_ITEM_HPP
#define MENU_ITEM_HPP

#include <string>
using namespace std;

class MenuItem {
private:
  string name;
  double price;
public:
  MenuItem(string nam, double pric);
  void display();
};

#endif