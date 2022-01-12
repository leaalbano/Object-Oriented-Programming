//
//  Creature.h
//  Lab 12- Abstract Classes
//
//  Created by Lea Albano on 4/28/20.
//  Copyright © 2020 Lea Albano. All rights reserved.
//

#ifndef Creature_h
#define Creature_h
#include <iostream>
#include <string>
using namespace std;
//base class
class Creature
{
protected:
    string creatureName;
    string action;
public:
    Creature(string n, string a)
    {
        creatureName = n;
        action = a;
    }
    //will implement these functs in other classes
    virtual void doAction() = 0;
    virtual void drawOnScreen() = 0;
};

#endif /* Creature_h */
