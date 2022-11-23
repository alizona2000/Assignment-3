#include <iomanip>
#include <stdexcept>
#include <sstream>
#include "Account.h"
using namespace std;


Account::Account(const int anumber, const string &stat, const string &date, const int bnumber)
   : accountNumber(anumber), status(stat), dateOpened(date) {
   setAccountNumber(anumber);
   setBranchNumber(bnumber);
}


void Account::setAccountNumber(const int anumber) {
   accountNumber = anumber; // should validate
}

int Account::getAccountNumber() const { return accountNumber; }


void Account::setStatus(const string& stat) {
    if (stat == "" || "open") {
        status = "open";
    }
    if (stat == "closed" || "frozen") {
        status = stat;
    }
    
   
}

void Account::changeStatus(const string& newstatus) {
    if (status == "frozen" || "open") {
        status = newstatus;
    }
    if (status == "closed") {
        throw invalid_argument("The account is closed. Account status cannot be changed.");
    }
    
   
}

string Account::getStatus() const { return status; }


void Account::setDateOpened(const string& date) {
   dateOpened = date;
}

string Account::getDateOpened() const {
   return dateOpened;
}

void Account::setBranchNumber(const int bnumber) {
   branchNumber = bnumber;
}

int Account::getBranchNumber() const { return branchNumber; }
