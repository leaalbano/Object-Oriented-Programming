#ifndef Warrior_h
#define Warrior_h
#include "CommonStatistics.h"
#include <iostream>
#include <math.h>


//Warrior class
class Warrior: public CommonStatistics
{
private:
    int baseAttack; //Attack amount
    int strength; //attack modifier
    int speed; //initial roll Modifier
    int initiative; //initiative score
    int healthMod;//health modifier
public:
    
    Warrior(int baseAtt, int str, int spe, int init, int healMod, std::string n, int hea, int arm):
    CommonStatistics(n, hea, arm)
    {
        baseAttack = baseAtt; //attack amount (1 D6)
        strength = str; //attack modifier (+3)
        speed = spe; //initiative modifier (+4)
        initiative = init; //initiative roll (1-20)
        healthMod = healMod; //health modifier (2 D5)
    };
    
    //base attack for warrior is based off 1 D6
    virtual int getBaseAtt()
    {
        int baseAttack = rand() % 6 + 1;
        std::cout << getName() << " rolled a dice (1-6): Damage score of " << baseAttack << " and a strength modifier of 3 for " << (baseAttack + 3) << std::endl;
        return baseAttack + 3;
    }
    
    virtual int receiveDamage(int dmgTaken)
    {
        health = health - dmgTaken;
        std::cout << getName() << " has taken " << dmgTaken << " damage and is now at " << health << " HP " << std::endl;
        return health;
    }
    
    //rolls the die for the healthMod amount (2 D5)
    int getHealMod()
    {
        int healMod = ((rand() % 5 + 1) + (rand() % 5 + 1));
        return healMod;
    }
    
    void setStrength(int str)
       {
           strength = str;
       }
    
    //adds onto the initial attack amount + 3
    int getStrength()
    {
        return strength;
    }
    
    void setSpeed(int spe)
       {
           speed = spe;
       }
    
    //speed modifier automatically set at 4
    int getSpeed()
    {
        return speed;
    }
    
    //rolls the initiative die (1-20)
    int getInit()
    {
        int initiative = rand() % 20 + 1;
        return initiative;
    }
    
    //Print's Warrior's stats
    void printStatsWarrior()
    {
        std::shared_ptr<Warrior> war = std::make_shared<Warrior>(000, 3, 4, 000, 000, "Knight Timmy", 20, 5);
        std::cout << "Warrior " << war->getName() << "'s current stats: " << std::endl;
        std::cout << "Health: " << war->getHealth() << std::endl;
        std::cout << "Healing Die: 2 D5" << std::endl;
        std::cout << "Base attack die: 1 D6" << std::endl;
        std::cout << "Armor: " << war->getArmor() << std::endl;
        std::cout << "Attack Modifier (Strength): " << war->getStrength() << std::endl;
        std::cout << "Initiative Modifier (Speed): " << war->getSpeed() << std::endl;
    }
    
    //rolls initiative before battle
    int rollInit1()
    {
        int roll = rand() % 20 +1;
        std::cout << "You rolled one dice (1-20): Initiative score of " << roll << " + a speed modifier of 4 a total of " << (roll + speed) << std::endl;
        return (roll + speed);
    }
    
    //Warior's turn: asks user input 1 or 2 for attack or heal
    void turn()
    {
        std::shared_ptr<Warrior> war = std::make_shared<Warrior>(000, 3, 4, 000, 000, "Knight Timmy", 20, 5);
        
        std::cout << "Your move: " << std::endl;
        std::cout << "What will you do?" << std::endl;
        std::cout << "1. Attack" << std::endl;
        std::cout << "2. Heal" << std::endl;
        
    }
        
        void healing()
        {
            if(health == 20)
            {
                std::cout << "Total HP capped at: 20" << std::endl;
            }
            else
            {
                std::cout << "You heal yourself for " << getHealMod() << " hit points!" << std::endl;
                health = health + getHealMod();
                std::cout << "Total HP now at " << health << std::endl;
                if (health > 20)
                {
                    std::cout << "Total HP capped at: 20" << std::endl;
                    health = 20;
                }
            }
        }
        

};
    
#endif /* Warrior_h */
