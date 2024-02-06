#ifndef CCUSTOMER_H   //prevent multiple inclusions of header file
#define CCUSTOMER_H
#include <iostream>
#include <string>
#include <conio.h>
#include <iomanip>
#include <stdlib.h>
using namespace std;

class CCustomer
{
public:
    CCustomer();        //constructor
    void add_customer_info();  //functions prototypes
    void get_customer_info();
    void setcus_id(int number);
    int getcus_id();
    void setcus_name(string name);
    string getcus_name();
    void setcus_email(string email);
    string getcus_email();
    void setemail_password(string password);
    string getemail_password();

private:
    int cus_id;
    string cus_name,cus_email,email_password;
};

#endif // CCUSTOMER_H
