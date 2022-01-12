//
//  sphere.h
//  Lab11-Inheritance
//
//  Created by Lea Albano on 4/15/20.
//  Copyright © 2020 Lea Albano. All rights reserved.
//

#ifndef sphere_h
#define sphere_h
#include <iostream>
#include <string>
#include "base.h"
using namespace std;

class Sphere: public GeometricalShape
{
private:
    float radius;
    float volume;
    int x, y, z;
public:
    Sphere(string n): GeometricalShape(n)
    {
        radius = 0;
        x = 0;
        y = 0;
        z = 0;
    }

    Sphere(float r, int xc, int yc, int zc, string n): GeometricalShape(n)
    {
        radius = r;
        x = xc; //x coordinate
        y = yc; //y coordinate
        z = zc; //z coordinate
    }
    void setRadius(float r)
    {
        radius = r;
    }
    float getRadius()
    {
        return radius;
    }
    float SphereVol()
    {
        volume = (4.0/3.0) * (3.14 * pow(radius, 3.0));
        return volume;
    }
    void setX(int xc)
    {
        x = xc;
    }
    void setY(int yc)
    {
        y = yc;
    }
    void setZ(int zc)
    {
        z = zc;
    }
    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }
    int getZ()
    {
        return z;
    }
};

#endif /* sphere_h */
