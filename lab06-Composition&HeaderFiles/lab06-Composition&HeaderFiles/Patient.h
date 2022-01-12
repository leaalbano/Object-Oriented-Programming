#ifndef Patient_h
#define Patient_h
#include "BloodData.h"
#include <iostream>
using namespace std;
class Patient
{
private:
    int ID_number;
    int age;
    BloodData blood_data;
public:
    Patient();
    Patient(int i, int a, char d, string b);
    int getID();
    int getAge();
    void displayBlood();
};

Patient::Patient()
{
    ID_number = 0;
    age = 0;
}
Patient::Patient(int ID, int a, char d, string b)
:blood_data(d, b)
{
    ID_number = ID;
    age = a;
}
int Patient::getID()
{
    return ID_number;
}
int Patient::getAge()
{
    return age;
}
void Patient::displayBlood()
{
    cout << "Blood Type: " << blood_data.getBlood() << blood_data.getRhFactor() << endl;
}

#endif /* Patient_h */
