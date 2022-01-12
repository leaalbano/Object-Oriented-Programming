//
//  Player.h
//  Lab 12- Abstract Classes
//
//  Created by Lea Albano on 4/28/20.
//  Copyright © 2020 Lea Albano. All rights reserved.
//

#ifndef Player_h
#define Player_h
#include "Creature.h"

using namespace std;

class Player: public Creature
{
public:
    Player(string n, string a): Creature(n, a)
    {
        
    }
    
    virtual void drawOnScreen()
    {
        cout << "Player " << creatureName << endl;
        doAction();
    }
    
    virtual void doAction()
    {
        cout << " is " << action << "!!" << endl;
    }
};


#endif /* Player_h */
