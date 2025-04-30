#include <vector>
#include "BankAccount.hpp"
using namespace std;
class Bank{
private:
  vector<BankAccount> accounts;
public:
  void createAccount(string acNumber, double balance);
  BankAccount* findAccount(string acc);
  int transferMoney(BankAccount source, BankAccount target, double transfer);
};

