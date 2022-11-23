#include <iomanip>
#include <stdexcept>
#include <sstream>
#include "Customer.h"
using namespace std;

// constructor
Customer::Customer(const string &name,
   const string &work, const string &home, const string &cell,
   const string &line1, const string &line2, const string &cityy,
   const string &provincee, const string &post)
: fullName(name), workPhone(work), homePhone(home), cellPhone(cell), addL1(line1), addL2(line2), city(cityy), province(provincee), postalCode(post) {
       
}


void Customer::setFullName(const string& name) {
    if (name.length() < 6 ){
        throw invalid_argument("/nName has to be 6 characters and more.");
    }
   fullName = name;
}

string Customer::getFullName() const { return fullName; }



void Customer::setWorkPhone(const string& work) {
   workPhone = work;
}

string Customer::getWorkPhone() const { return workPhone; }



void Customer::setHomePhone(const string& home) {
   homePhone = home;
}

string Customer::getHomePhone() const { return homePhone; }


void Customer::setCellPhone(const string& cell) {
    if ( workPhone == "" || homePhone == "" ) {
       throw invalid_argument("/nAt least one phone number need to be adjusted.");
    }
   cellPhone = cell;
}

string Customer::getCellPhone() const { return cellPhone; }


void Customer::setAddL1(const string& line1) {
    if ( line1 == "" ) {
       throw invalid_argument("/nAddress line 1 needs to be filled.");
    }
    
   addL1 = line1;
}

string Customer::getAddL1() const { return addL1; }


void Customer::setAddL2(const string& line2) {
   addL2 = line2;
}

string Customer::getAddL2() const { return addL2; }


void Customer::setCity(const string& cityy) {
   city = cityy;
}

string Customer::getCity() const { return city; }


void Customer::setProvince(const string& provincee) {
   province = provincee;
}

string Customer::getProvince() const { return province; }


void Customer::setPostalCode(const string& post) {
   postalCode = post;
}

string Customer::getPostalCode() const { return postalCode; }




/*
 
 
 if (sales < 0.0) {
    throw invalid_argument("Gross sales must be >= 0.0");
 }

 grossSales = sales;
}

 */
