#include <iostream>
#include <iomanip>
#include "Customer.h"
#include "Account.h"
#include "SubAccount.h"
using namespace std;

int main() {
    
    SubAccount subAccount1(1, "open", "July 2, 2022", 1399, 5498622.00);
    SubAccount subAccount2(2, "closed", "July 5, 2022", 1389, 6498622.00);
    SubAccount subAccount3(3, "open", "July 17, 2022", 1399, 7498622.00);
    SubAccount subAccount4(4, "open", "July 26, 2022", 1389, 8498622.00);

    Customer customer1("Pearson Right", "", "", "604-345-6333", "234 Gill street", "", "Langley", "BC", "F5T 5E4");
    
    cout << "The first line of the customer address is: " << customer1.getAddL1() << endl;
    
    subAccount2.Deposit(30000000);
    
    cout << "The balance of sub account 2 is " << fixed << setprecision(0) << subAccount2.getBalance() << " cents." << endl;
    
    cout << "The balance of sub account 3 is " << fixed << setprecision(0) << subAccount3.getBalance() << " cents." << endl;
}
