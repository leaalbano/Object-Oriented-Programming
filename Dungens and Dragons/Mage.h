#ifndef Mage_h
#define Mage_h
#include "CommonStatistics.h"
#include <iostream>

//Mage class
class Mage: public CommonStatistics
{
private:
    int baseAttack; //base Attack
    int intellect; //Attack Modifier (+7) added to base attack
    int initiative; //die roll (1-20)
public:
    
    Mage(int baseAtt, int intel, int init, std::string n, int hea, int arm):
    CommonStatistics(n, hea, arm)
    {
        baseAttack = baseAtt;
        intellect = intel;
        initiative = init;
    };
    
    virtual int getBaseAtt()
    {
        int baseAttack = rand() % 4 + 1;
        return baseAttack;
    }
    
    virtual int receiveDamage(int dmgTaken)
    {
        health = health - dmgTaken;
        std::cout << getName() << " has taken " << dmgTaken << " damage and is now at " << health << " HP " << std::endl;
        return health;
    }

    void setIntellect(int intel)
    {
        intellect = intel;
    }//the Mage's attack modifier is that 7
     //attack points are added to the overall damage
    int getIntellect()
    {
        return intellect;
    }
    
    //rolls the initiative die (1-20)
    int getInit()
    {
        int initiative = rand() % 20 + 1;
        return initiative;
    }
    
    //rolls the die for the healthMod amount (2 D5)
    int getHealMod()
    {
        int healMod = (rand() % 20 + 1) + (rand() % 20 + 1);
        return healMod;
    }

    
    //Prints Mage's stats
    void printStatsMage()
    {
        std::shared_ptr<Mage> mag = std::make_shared<Mage>(000, 7, 000, "Wizard Gandolfo", 15, 2);
        std::cout << "Mage " << mag->getName() << "'s current stats: " << std::endl;
        std::cout << "Health: " << mag->getHealth() << std::endl;
        std::cout << "Base attack die: 1 D4" << std::endl;
        std::cout << "Armor: " << mag->getArmor() << std::endl;
        std::cout << "Attack Modifier (Intellect): " << mag->getIntellect() << std::endl;
    }
    
    //Roll Initiative
    int rollInit2()
    {
        std::shared_ptr<Mage> mag = std::make_shared<Mage>(000, 7, 000, "Wizard Gandolfo", 15, 2);
        int roll = rand() % 20 +1;
        std::cout << mag->getName() << " rolled one dice (1-20): Initiative score of " << roll << " and has no bonus speed modifier" << std::endl;
        return roll;
    }

    //attack
    void turn()
    {
        std::shared_ptr<Mage> mag = std::make_shared<Mage>(000, 7, 000, "Wizard Gandolfo", 15, 2);
        std::cout << mag->getName() << "'s move:" << std::endl;
    }
};

#endif /* Mage_h */
