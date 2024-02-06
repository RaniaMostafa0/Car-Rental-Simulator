#include "cbus.h"
#include "CVehicle.h"
#include <iostream>
#include <string>
#include <conio.h>
#include <iomanip>
#include <stdlib.h>
using namespace std;


void cbus::setnumber(int number)   //accessing private number variable
{
    number_of_passengers_of_bus = number;
}
int cbus::getnumber()
{
    return number_of_passengers_of_bus;
}
void cbus::setdriver(string driver)    //accessing private name of driver variable
{
    name_of_driver = driver;
}
string cbus::getdriver()
{
    return name_of_driver;
}
