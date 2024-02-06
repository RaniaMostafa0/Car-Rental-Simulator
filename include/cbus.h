#define CBUS_H
#include "CVehicle.h"     //accessing cvehicle header file
#include <iostream>
#include <string>
#include <conio.h>
#include <iomanip>
#include <stdlib.h>
using namespace std;

class cbus : public CVehicle    //inheritance
{
private :
    int number_of_passengers_of_bus;
    string name_of_driver;
public:
    void setnumber(int number);
    int getnumber();
    void setdriver(string driver);
    string getdriver();
};
