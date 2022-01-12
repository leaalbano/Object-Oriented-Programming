#ifndef CommonStatistics_h
#define CommonStatistics_h
#include <string>
#include <iostream>
class CommonStatistics
{
private:
    std::string name; //Player name
    int armor; //player's armor
protected:
     int health; //player's initial health
public:
    CommonStatistics(std::string n, int hea, int arm)
    {
        name = n;
        health = hea;
        armor = arm;
    }
    void setName(std::string n)
    {
        name = n;
    }
    std::string getName()
    {
        return name;
    }
    
    void getHealth(int hea)
    {
        health = hea;
    }
    int getHealth()
    {
        return health;
    }
    
    void setArmor(int arm)
    {
        armor = arm;
    }
    int getArmor()
    {
        return armor;
    }
};
#endif /* CommonStatistics_h */
