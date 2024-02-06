#include <iostream>
#include "CVehicle.h"
#include <string>
#include <conio.h>
#include <iomanip>
#include <stdlib.h>
using namespace std;
CVehicle::CVehicle() //initializing strings to NULL and numbers to zero
{
    string car_model= "NULL", car_type= "NULL", return_time= "NULL", rentled_name = "NULL";
    int Car_Number = 0;
    float car_price = 0;
}

void CVehicle::setcarnumber(int number)    //accessing private car number variable
{
    Car_Number = number ;
}
int CVehicle::getcarnumber()
{
    return Car_Number;
}
void CVehicle::setcarmodel(string model )   //accessing private car model variable
{
    car_model = model;
}
string CVehicle::getcarmodel()
{
    return car_model;
}
void CVehicle::setcartype(string type)    //accessing private car type variable
{
    car_type=type;
}
string CVehicle::getcartype()
{
    return car_type;
}
void CVehicle::setcarprice(float price)   //accessing private car price variable
{
    car_price = price;

}
float CVehicle::getcarprice( )
{
    return car_price ;
}
void CVehicle::setreturntime(string time)   //accessing private return time variable
{
    return_time=time;
}
string CVehicle::getreturntime()
{
    return return_time;
}
void CVehicle::setrentledname(string name)   //accessing private rentled name variable
{
    rentled_name = name;
}
string CVehicle::getrentledname( )
{
    return rentled_name;
}
void CVehicle::Add_car_details()   //function to add the car data from user
{
    cout<<"rentled name :";
    cin>>rentled_name;
    cout<<"enter the car's number :";
    cin>>Car_Number;
    cout<<"enter the car's model :";
    cin>>car_model;
    cout<<"enter the type of the car :";
    cin>>car_type;
    cout<<"enter the car price:";
    cin>>car_price;
    cout<<"Enter the return time:";
    cin>>return_time;
}
void CVehicle::get_cars_info()  //function to print the car data on screen
{
    cout<<"Rentled Name:\t"<<rentled_name<<endl;
    cout<<"Car Number:\t"<<Car_Number<<endl;
    cout<<"Car Model:\t"<<car_model<<endl;
    cout<<"Car type:\t"<<car_type<<endl;
    cout<<"Car Price:\t"<<car_price<<endl;
    cout<<"Return time:\t"<<return_time<<endl;
}
void CVehicle::rent_car() //function to print the return time if the car is rented
{
    rented = true;
    cout<<"It is rented and the return time is "<<return_time<<endl;
}
