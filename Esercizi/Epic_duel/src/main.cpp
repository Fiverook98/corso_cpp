#include <vector>
#include <iostream>
#include "Warrior.hpp"
#include "Sorcerer.hpp"

using namespace std;

int main() {
  vector<Character*> characters;
  characters.push_back(new Warrior("War", 150, 25));
  characters.push_back(new Sorcerer("Gandalf", 100, 15));
  for(auto* chars : characters){
    chars -> attack();
    chars -> displayInfo();
  }
  Character* characterPtr = new Warrior("Death", 300, 30);
  Warrior* warPtr = dynamic_cast<Warrior*>(characters[0]);
  if(warPtr){
    warPtr -> specialAttack();
  }
  for(auto* chars : characters){
    delete chars;
  }
  characters.clear();
  return 0;
}