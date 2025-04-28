#include <iostream>
#include "Restaurant.hpp"

using namespace std;
int main() {
  // Initialize Restaurant with 2 tables
  Restaurant restaurant = Restaurant(2);
  // Create customers and make reservations
  std::shared_ptr<Customer> customer1 = make_shared<Customer>("Lisa");
  std::shared_ptr<Customer> customer2 = make_shared<Customer>("Francesco");
  std::shared_ptr<Customer> customer3 = make_shared<Customer>("Sara");
  std::shared_ptr<Customer> customer4 = make_shared<Customer>("Davide");
  //reserving table
  cout << "Reserving table for " << (*customer2).getName() << ": " << (restaurant.reserveTable(customer2) ? "Success" : "Added to waitlist") << endl;
  cout << "Reserving table for " << (*customer3).getName() << ": " << (restaurant.reserveTable(customer3) ? "Success" : "Added to waitlist") << endl;
  cout << "Reserving table for " << (*customer4).getName() << ": " << (restaurant.reserveTable(customer4) ? "Success" : "Added to waitlist") << endl;
  cout << "Reserving table for " << (*customer1).getName() << ": " << (restaurant.reserveTable(customer1) ? "Success" : "Added to waitlist") << endl;

  // Release a table and demonstrate waitlist notification
  restaurant.releaseTable(1);
  restaurant.printWaitlist();
  return 0;
}