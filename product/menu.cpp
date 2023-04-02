#include <string>
#include <iostream>
using namespace std;

#include "Truck.h"
#include "Wheel.h"
#include "Car.h"

int main()
{
    cout << "Some illustrations of instance variables and pointer variables" << endl;

    cout << endl << "instance variables:" << endl;
    {
        cout << endl << "ModelX: " << endl;
        Car ModelX("Steve", "Jobs");

        cout << endl << "CyberTrucks " << endl;
        Truck CyberTrucks("Big", "Lebowski", "Dude");

        cout << endl << "End of scope, automatic clean-up of instance variables (dtor will be called)." << endl;
        cout << "Automatic clean-up is in the reverse order of creation of the variables." << endl;
    }

    cout << endl << "pointer variables:" << endl;
    {
        cout << endl << "Person *p2:" << endl;
        Person *p1 = new Person("Steve", "Jobs");

        cout << endl << "Student *p2:" << endl;
        Student *p2 = new Student("Big", "Lebowski", "Dude");

        cout << endl << "End of scope, pointers p1 and p2 are cleaned-up, but not the pointer variables!" << endl;
    }

    cout << endl << "Clean-up needs to be done by programmer, which we can no longer do now..." << endl;

    return 0;
}

