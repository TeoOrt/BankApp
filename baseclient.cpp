#include "baseclient.h"

const std::string &baseclient::getClient_name() const
{
    return client_name;
}

void baseclient::setClient_name(const std::string &newClient_name)
{
    client_name = newClient_name;
}

const std::string &baseclient::getEmail() const
{
    return email;
}

void baseclient::setEmail(const std::string &newEmail)
{
    email = newEmail;
}

const std::string &baseclient::getHome_address() const
{
    return home_address;
}

void baseclient::setHome_address(const std::string &newHome_address)
{
    home_address = newHome_address;
}

int baseclient::getPhone_number() const
{
    return phone_number;
}

void baseclient::setPhone_number(int newPhone_number)
{
    phone_number = newPhone_number;
}

int baseclient::getSocial_security() const
{
    return social_security;
}

void baseclient::setSocial_security(int newSocial_security)
{
    social_security = newSocial_security;
}

void baseclient::createcheckingaccount(int cash)
{

}


baseclient::baseclient(const std::string &client_name, const std::string &email, const std::string &home_address, int phone_number, int social_security) : client_name(client_name),
    email(email),
    home_address(home_address),
    phone_number(phone_number),
    social_security(social_security)
{}
