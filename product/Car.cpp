#include "Car.h"

#include <string>
#include <iostream>
using namespace std;

Car::Car()
{
    cout << "Car::Car() was called" << endl;
}

Car::Car(const string& model, const string& material, int diameter, int nrWheels)
: model(model), material(material), diameter(diameter), nrWheels(nrWheels), 
{
    cout << "Car::Car(" << model << ", " << material << ", " << diameter << ", " << nrWheels << " was called)" << endl;
}

Car::~Car(void)
{
    cout << "Car::~Car() of " << model << ", " << material << ", " << diameter << ", " << nrWheels << " was called" << endl;
}
