//
//  Monster.h
//  Lab 12- Abstract Classes
//
//  Created by Lea Albano on 4/28/20.
//  Copyright © 2020 Lea Albano. All rights reserved.
//

#ifndef Monster_h
#define Monster_h
#include "Creature.h"

using namespace std;

class Monster: public Creature
{
public:
    Monster(string n, string a): Creature(n, a)
    {
        
    }
    
    virtual void drawOnScreen()
    {
        cout << "Monster " << creatureName << endl;
        doAction();
    }
    
    virtual void doAction()
    {
        cout << " is " << action << "!!" << endl;
    }
};

#endif /* Monster_h */
