#ifndef BASECLIENT_H
#define BASECLIENT_H
#include <iostream>

class baseclient {
protected:
  std::string client_name;
  std::string email;
  std::string home_address;
  int phone_number;
  int social_security;
  float cash{0.0};

public:
  baseclient(const std::string &client_name, const std::string &email, const std::string &home_address, int phone_number, int social_security);
  const std::string &getClient_name() const;
void setClient_name(const std::string &newClient_name);
 const std::string &getEmail() const;
void setEmail(const std::string &newEmail);
 const std::string &getHome_address() const;
void setHome_address(const std::string &newHome_address);
 int getPhone_number() const;
void setPhone_number(int newPhone_number);
 int getSocial_security() const;
void setSocial_security(int newSocial_security);
virtual void createcheckingaccount(int cash =0);
};
#endif // BASECLIENT_H
