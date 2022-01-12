#ifndef BloodData_h
#define BloodData_h
#include <iostream>
using namespace std;
class BloodData
{
private:
    string blood_type;
    char RhFactor;
public:
    BloodData(); //default constructor
    BloodData(char r, string b);
    string getBlood();
    char getRhFactor();
    
};

BloodData::BloodData()
{
    blood_type = "O";
    RhFactor = '+';
}
BloodData::BloodData(char r, string b)
{
    blood_type = b;
    RhFactor = r;
}
string BloodData::getBlood()
{
    return blood_type;
}
char BloodData::getRhFactor()
{
    return RhFactor;
}
#endif /* BloodData_h */
