// Fig. 11.12: CommissionEmployee.h
// CommissionEmployee class definition.
#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string> // C++ standard string class

class Account {
public:
   Account(const int, const std::string&, const std::string&,
      const int);

   void setAccountNumber(const int);
   int getAccountNumber() const;

   void setStatus(const std::string&);
   std::string getStatus() const;
   void changeStatus(const std::string&);

   void setDateOpened(const std::string&);
   std::string getDateOpened() const;

   void setBranchNumber(const int);
   int getBranchNumber() const;
    
    
   virtual void Deposit(double) = 0;
   virtual void Withdraw(double) = 0;
    
private:
   int accountNumber;
   std::string status;
   std::string dateOpened;
    int branchNumber;
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
