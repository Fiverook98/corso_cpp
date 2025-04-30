#include <iostream>
#include "Bank.hpp"

using namespace std;

int main() {
  Bank bank = Bank();

  bank.createAccount("1001",5000);
  bank.createAccount("1002",3000);
  bank.createAccount("1003",2000);

  BankAccount::Transaction transaction;

  transaction.deposit(*bank.findAccount("1001"), 1000);
  transaction.withdraw(*bank.findAccount("1002"), 500);

  int result = bank.transferMoney(*bank.findAccount("1001"), *bank.findAccount("1002"), 1000);

  if(result == 1){
    cout << "Transfer Success!\n";
  }
  if(result == 2){
    cout << "One or both accounts are not found!\n";
  }
  if(result == 3){
    cout << "Insufficient founds!\n";
  }

  return 0;

}
