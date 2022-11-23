// Fig. 11.15: BasePlusCommissionEmployee.cpp
// Class BasePlusCommissionEmployee member-function definitions.
#include <stdexcept>
#include <sstream>
#include "SubAccount.h"
using namespace std;


SubAccount::SubAccount(const int anumber, const string &stat, const string &date, const int bnumber, double balance1)

   : Account(anumber, stat, date, bnumber) {
   setBalance(balance1);
}

// set base salary
void SubAccount::setBalance(double balance1) {

   balance = balance1;
}

// return base salary
double SubAccount::getBalance() const {
   return balance;
}


void SubAccount::Deposit(double deposit) {
    if (getStatus() != "open") {
       throw invalid_argument("The account is not open to perform that.");
    }
    if (deposit < 0.0) {
       throw invalid_argument("Deposit must be >= 0.0");
    }
    balance += deposit;
}

void SubAccount::Withdraw(double withdraw) {
    if (getStatus() == "closed" || "frozen") {
       throw invalid_argument("The account is not open to perform that.");
    }
    if (withdraw < 0.0) {
       throw invalid_argument("Withdraw must be >= 0.0");
    }
    balance -= deposit;
}
