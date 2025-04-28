#include "Restaurant.hpp"
#include "Customer.hpp"
#include "removeElement.hpp"

#include <iostream>

using namespace std;

Restaurant::Restaurant(int initialTableCount){
  for(int i = 1; i <= initialTableCount; i++){
    tables.push_back(make_unique<Table>(i));
  }
}
bool Restaurant::reserveTable(shared_ptr<Customer>& customer){
  for(auto& table : tables){
    if ((*table).getIsAvailable()){
      (*table).reserve();
      activeCustomers.push_back(customer);
      return true;
    }
  }
  waitlist.push_back(customer);
  return false;
}

void Restaurant::printWaitlist(){
  cout << "The following people are waiting for a table: \n";
  for(auto& wait : waitlist){
    shared_ptr<Customer> customerPtr = wait.lock();
    cout << (*customerPtr).getName() << endl;
  }
}

void Restaurant::releaseTable(int tableNumber){
  for( auto& table : tables){
    if(tableNumber == (*table).getNumber()){
      if(!((*table).getIsAvailable())){
        (*table).release();
        notifyWaitlist();
      }
    }
  }
}

void Restaurant::notifyWaitlist(){
  if (!(waitlist.empty())){
    shared_ptr<Customer> customer = waitlist[0].lock();
    if(customer){
      reserveTable(customer);
      removeElement(waitlist, customer);
    }
  }
}
