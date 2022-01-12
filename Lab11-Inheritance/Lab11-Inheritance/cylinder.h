//
//  cylinder.h
//  Lab11-Inheritance
//
//  Created by Lea Albano on 4/21/20.
//  Copyright © 2020 Lea Albano. All rights reserved.
//

#ifndef cylinder_h
#define cylinder_h
#include "base.h"

class Cylinder: public GeometricalShape
{
private:
    float height, volume;
    float radius;
    int x, y, z;
public:
    Cylinder(string n): GeometricalShape(n)
    {
        height = 0;
        radius = 0;
        x = 0;
        y = 0;
        z = 0;
    }

    Cylinder(float h, float r, int xc, int yc, int zc, string n): GeometricalShape(n)
    {
        height = h;
        radius = r;
        x = xc; //x coordinate
        y = yc; //y coordinate
        z = zc; //z coordinate
    }
    void setHeight(float h)
    {
        height = h;
    }
    void setRadius(float r)
    {
        radius = r;
    }
    float getHeight()
    {
        return height;
    }
    float getRadius()
    {
        return radius;
    }
    float CylinderVol()
    {
        volume = 3.14 * pow(radius, 2.0) * height;
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

#endif /* cylinder_h */
