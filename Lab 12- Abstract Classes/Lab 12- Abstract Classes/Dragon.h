//
//  Dragon.h
//  Lab 12- Abstract Classes
//
//  Created by Lea Albano on 4/28/20.
//  Copyright © 2020 Lea Albano. All rights reserved.
//

#ifndef Dragon_h
#define Dragon_h
#include "Monster.h"
using namespace std;

class Dragon: public Monster
{
public:
    Dragon(string n, string a): Monster(n, a)
    {
        
    }
    
    virtual void drawOnScreen()
    {
        cout << "Dragon " << creatureName << endl;
        doAction();
    }
    
    virtual void doAction()
    {
        cout << " is " << action << "!!" << endl;
    }
};
#endif /* Dragon_h */
