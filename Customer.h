#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>

class Customer {
public:
   Customer(const std::string&, const std::string&,
      const std::string&, const std::string&, const std::string&,
    const std::string&, const std::string&, const std::string&,
    const std::string&);

   void setFullName(const std::string&);
   std::string getFullName() const;

   void setWorkPhone(const std::string&);
   std::string getWorkPhone() const;

   void setHomePhone(const std::string&);
   std::string getHomePhone() const;

   void setCellPhone(const std::string&);
    std::string getCellPhone() const;

   void setAddL1(const std::string&);
    std::string getAddL1() const;
    
    void setAddL2(const std::string&);
    std::string getAddL2() const;

    void setCity(const std::string&);
    std::string getCity() const;
    
    void setProvince(const std::string&);
    std::string getProvince() const;

    void setPostalCode(const std::string&);
    std::string getPostalCode() const;

private:
   std::string fullName;
   std::string workPhone;
   std::string homePhone;
    std::string cellPhone;
    std::string addL1;
    std::string addL2;
    std::string city;
    std::string province;
    std::string postalCode;

};

#endif
