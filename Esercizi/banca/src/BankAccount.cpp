#include "BankAccount.hpp"
using namespace std;
//constructor
BankAccount::BankAccount(string accountNumber, double balance) : 
accountNumber(accountNumber),
balance(balance){}

//getter
string BankAccount::getAccountNumber(){
  return accountNumber;
}

double BankAccount::getBalance(){
  return balance;
}

//setter
void BankAccount::setAccountNumber(string acNumber){
  accountNumber = acNumber;
}

void BankAccount::setBalance(double bal){
  balance = bal;
}

//transaction function
//deposit
void BankAccount::Transaction::deposit(BankAccount& bankAccount, double dep){
  bankAccount.balance += dep;
  cout << "You had deposit: " << dep << ".\nActually balance: " << bankAccount.getBalance() << ".\n";
}
//withdraw
void BankAccount::Transaction::withdraw(BankAccount& bankAccount, double with){
  if(bankAccount.getBalance() > with){
    bankAccount.balance -= with;
    cout << "You had withdraw: " << with <<".\n";
  }else{
    cout << "You don't have enougth money in balance.\n";
  }
  cout << "Your actually balance is: "<< bankAccount.getBalance()<< ".\n";
}





