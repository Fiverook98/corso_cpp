#include <string>
#include <iostream>

using namespace std;
class BankAccount{
private:
  string accountNumber;
  double balance;
public:
  BankAccount(string accountNumber, double balance);
  string getAccountNumber();
  double getBalance();
  void setAccountNumber(string acNumber);
  void setBalance(double bal);

  class Transaction{
public:
    void deposit(BankAccount& bankAccount, double dep);
    void withdraw(BankAccount& bankAccount, double with);
  };
};