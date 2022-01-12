//
//  base.h
//  Lab11-Inheritance
//
//  Created by Lea Albano on 4/15/20.
//  Copyright © 2020 Lea Albano. All rights reserved.
//

#ifndef base_h
#define base_h
#include <string>
#include <iostream>
#include <math.h>
using namespace std;

class GeometricalShape
{
private:
    string name;
public:
    GeometricalShape(string n)
    {
        name = n;
    }
    void setName(string n)
    {
        name = n;
    }
    string getName()
    {
        return name;
    }
};

#endif /* base_h */
