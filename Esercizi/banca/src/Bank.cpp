#include "Bank.hpp"
#include <iostream>
using namespace std;
void Bank::createAccount(string acNumber, double balance){
  accounts.push_back(BankAccount(acNumber, balance));
}

BankAccount* Bank::findAccount(string acc){
  for(auto& count : accounts){
    if(acc == count.getAccountNumber()){
      return &count;
    }
  }
  return nullptr;
}

int Bank::transferMoney(BankAccount source, BankAccount target, double transfer){
  if(findAccount(source.getAccountNumber()) && findAccount(target.getAccountNumber())){
    if(source.getBalance() >= transfer){
      BankAccount::Transaction transaction;
      transaction.withdraw(source, transfer);
      transaction.deposit(target, transfer);
      return 1;//Success
    }else{
      return 3;//Insufficient founds
    }
  }
  return 2;//account not found
}










