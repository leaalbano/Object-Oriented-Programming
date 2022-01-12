#ifndef Rogue_h
#define Rogue_h
#include "CommonStatistics.h"
#include <iostream>


class Rogue: public CommonStatistics
{
private:
    int baseAttack; //base Attack
    int agility; //Attack Modifier (+7) added to base attack
    int speed; //Initiative modifier (+5)
    int dodge; //dodges 50% of attacks from opponent
    int initiative; //die roll (1-20)
public:
    Rogue(int baseAtt, int agil, int spe, int dodg, int init, std::string n, int hea, int arm):
    CommonStatistics(n, hea, arm)
    {
        baseAttack = baseAtt;
        agility = agil;
        speed = spe;
        dodge = dodg;
        initiative = init;
    };
    
    //ROGUE ROLLS 2 D4 FOR BASE ATTACK
    virtual int getBaseAtt()
    {
        int baseAttack = ((rand() % 4 + 1) + (rand() % 4 + 1));
        return baseAttack;
    }
    
    //Receives damage when other player attacks it
    virtual int receiveDamage(int dmgTaken)
    {
        health = health - dmgTaken;
        std::cout << getName() << " has taken " << dmgTaken << " damage and is now at " << health << " HP " << std::endl;
        return health;
    }
    
    //AGILITY +7
    void setAgility(int agil)
    {
        agility = agil;
    }
    int getAgility()
    {
        return agility;
    }
    
    //SPEED +5 FOR INITIATIVE
    void setSpeed(int spe)
    {
        speed = spe;
    }
    int getSpeed(int spe)
    {
        return speed;
    }
    
    int rollInit3()
    {
        int roll = rand() % 20 + 1;
        std::cout << "Assassin Jim rolled one dice (1-20): Initiative score of " << roll << " + a speed modifier of 4 a total of " << (roll + speed) << std::endl;
        return (roll + speed);
    }
    
    //DODGES 50% OF ATTACKS MADE BY OPPONENT
    int getDodge(int dmgTaken)
    {
        srand(time(0));
        int dodge;
        dodge = rand() % 2 + 1;
        if(dodge == 1)
        {
            std::cout << "Assassin Jim dodges attack" << std::endl;
            health = health + dmgTaken;
            return (health + dmgTaken);
        }
        else
        {
            std::cout << "Assassin Jim now has " << (health - dmgTaken) << std::endl;
            return (health - dmgTaken);
        }
    }
};
    

#endif /* Rogue_h */
