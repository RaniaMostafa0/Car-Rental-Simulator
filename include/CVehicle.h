#ifndef CVEHICLE_H   //prevent multiple inclusions of header file
#define CVEHICLE_H
#include <iostream>
#include <string>
#include <conio.h>
#include <iomanip>
#include <stdlib.h>
using namespace std;

class CVehicle
{
public:   // public functions
    CVehicle();  // constructor
    void Add_car_details();  //functions prototype
    void get_cars_info();
    void rent_car();
    void setcarnumber(int number);
    int getcarnumber();
    void setcarmodel(string model);
    string getcarmodel();
    void setcartype(string type);
    string getcartype();
    void setcarprice(float price);
    float getcarprice();
    void setreturntime(string time);
    string getreturntime();
    void setrentledname(string name);
    string getrentledname();

    //end of public functions

private:
    int Car_Number;
    string car_model, car_type, return_time,rentled_name;
    float car_price;
    bool rented;
};//end of class

#endif // CVEHICLE_H
