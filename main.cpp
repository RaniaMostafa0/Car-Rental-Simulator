//Rania Mostafa Hassan  ID:211000884
//Seif eldeen Haytham Mostafa  ID:211001201
//Mostafa Eliemy  ID:211000028
//Khaled Akrab  ID:211000090

#include <iostream>
#include "CVehicle.h"
#include <string>
#include <conio.h>
#include <iomanip>
#include <stdlib.h>
#include "CCustomer.h"
#include "cbus.h"
using namespace std;

int main()
{
    int n_cars;
    cout<<"Enter number of cars: ";
    cin>>n_cars;
    CVehicle cvehicle[n_cars]; //defining class object
    CCustomer ccustomer;
    for (int i=1; i<=n_cars; i++)
    {
        cvehicle[i-1].Add_car_details();  // calling the function to add car details according to number of cars
    }
    cout<<"Enter your information: "<<endl;
    ccustomer.add_customer_info();  //calling the function to add customer's information
    cout<<"*****************************************************************************************************************"<<endl;
    ccustomer.get_customer_info(); //calling the function to print the customer's information
    cout<<"*****************************************************************************************************************"<<endl;
    for (int j=1; j<=n_cars; j++)
    {
        cout<<"The"<<"  "<<  j <<"  "<< "car you rented: "<<endl;
        cvehicle[j-1].get_cars_info();  //calling the function to print the car details
        cout<<"*****************************************************************************************************************"<<endl;
    }
    int n_buses;
    int x;
    string name_driver;
    cout<< "enter the number of buses: ";
    cin>>n_buses;
    cbus Cbus[n_buses]; //defining class object
    for(int a = 1 ; a<=n_buses ; a++)
    {
        cvehicle[a-1].Add_car_details(); //calling the function to add bus details
        Cbus[a-1].setnumber(x);
        Cbus[a-1].setdriver(name_driver);
    }
    for(int b =1 ; b<=n_buses ; b++)
    {
        cvehicle[b-1].get_cars_info(); //calling the function to print the bus details
        Cbus[b-1].getnumber();
        Cbus[b-1].getdriver();
    }
    return 0;
}
