#include "Warrior.hpp"
#include <iostream>
using namespace std;

Warrior::Warrior(string nm, int hp, int pw):
Character(nm, hp, pw){}

void Warrior::attack(){
  cout << "Swings a mighty sword!\n";
}

void Warrior::specialAttack(){
  cout << name << " a devasting double strike!\n";
}