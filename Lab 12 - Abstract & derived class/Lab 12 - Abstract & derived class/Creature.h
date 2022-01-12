//
//  Creature.h
//  Lab 12 - Abstract & derived class
//
//  Created by Lea Albano on 4/22/20.
//  Copyright © 2020 Lea Albano. All rights reserved.
//

#ifndef Creature_h
#define Creature_h
class Creature
{
protected:
string CreatureName;
public:
Creature(string);
virtual void DoAction() = 0;
virtual void DrawOnScreen() =0;
};

void string getName()
{
    
}
#endif /* Creature_h */
