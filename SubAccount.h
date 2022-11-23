// Fig. 11.10: BasePlusCommissionEmployee.h
// BasePlusCommissionEmployee class derived from class 
// CommissionEmployee.
#ifndef SUBACCOUNT_H
#define SUBACCOUNT_H

#include <string>
#include "Account.h"

class SubAccount : public Account {
public:
   SubAccount(const int, const std::string&, const std::string&, const int, double = 0.0);

   void setBalance(double);
   double getBalance() const;

   virtual void Deposit(double) override;
   virtual void Withdraw(double) override;
    
private:
   double balance;
    double deposit;
    double withdraw;
};

#endif

/**************************************************************************
 * (C) Copyright 1992-2017 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 **************************************************************************/
