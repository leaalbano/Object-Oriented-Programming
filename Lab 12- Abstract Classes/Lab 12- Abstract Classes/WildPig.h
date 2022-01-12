//
//  WildPig.h
//  Lab 12- Abstract Classes
//
//  Created by Lea Albano on 4/28/20.
//  Copyright © 2020 Lea Albano. All rights reserved.
//

#ifndef WildPig_h
#define WildPig_h
#include "Monster.h"

using namespace std;
class Wildpig: public Monster
{
public:
    Wildpig(string n, string a): Monster(n, a)
    {
        
    }
    
    virtual void drawOnScreen()
    {
        cout << "WildPig " << creatureName << endl;
        doAction();
    }
    
    virtual void doAction()
    {
        cout << " is " << action << "!!" << endl;
    }
};

#endif /* WildPig_h */
