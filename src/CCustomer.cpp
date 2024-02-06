#include <iostream>
#include "CCustomer.h"
#include <string>
#include <conio.h>
#include <iomanip>
#include <stdlib.h>
using namespace std;
CCustomer::CCustomer()
{
    int cus_id;
    string cus_name,cus_email,email_password;
}

void CCustomer::setcus_id(int number) //accessing private customer id variable
{
    cus_id = number ;
}
int CCustomer::getcus_id()
{
    return cus_id;
}
void CCustomer::setcus_name(string name)  //accessing private customer name variable
{
    cus_name = name;
}
string CCustomer::getcus_name()
{
    return cus_name;
}
void CCustomer::setcus_email(string email)  //accessing private customer email variable
{
    cus_email = email;
}
string CCustomer::getcus_email()
{
    return cus_email;
}
void CCustomer::setemail_password(string password)  //accessing private email password variable
{
    email_password = password;
}
string CCustomer::getemail_password()
{
    return email_password;
}
void CCustomer::add_customer_info() //function to add the customer's information
{
    cout<<"enter your name :";
    cin>>cus_name;
    cout<<"enter your ID :";
    cin>>cus_id;
    cout<<"enter your email :";
    cin>>cus_email;
    cout<<"enter your password :";
    cin>>email_password;
}
void CCustomer::get_customer_info() //function to print the customer's information
{
    cout<<"Name:\t"<<cus_name<<endl;
    cout<<"ID:\t"<<cus_id<<endl;
    cout<<"Email:\t"<<cus_email<<endl;
    cout<<"Password:"<<email_password<<endl;
}
