#include <iostream>
#include "Person.h"
#include "Employee.h"

using namespace std;

int main()
{
    Employee employee(1, "Mohamed", "Badwy", "mohamedbadwy360@gmail.com", "01553414588", "Engineer", "Software", 10000);

    employee.PrintInfo();
}