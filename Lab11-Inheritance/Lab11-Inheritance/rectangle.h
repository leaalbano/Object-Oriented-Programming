//
//  rectangle.h
//  Lab11-Inheritance
//
//  Created by Lea Albano on 4/21/20.
//  Copyright © 2020 Lea Albano. All rights reserved.
//

#ifndef rectangle_h
#define rectangle_h
#include "base.h"

class Rectangle: public GeometricalShape
{
private:
    float length, height, width;
    int x, y, z;
    float volume;
public:
    Rectangle(string n): GeometricalShape(n)
    {
        length = 0;
        height = 0;
        width = 0;
        x = 0;
        y = 0;
        z = 0;
    }

    Rectangle(float l, float h, float w, int xc, int yc, int zc, string n): GeometricalShape(n)
    {
        length = l;
        height = h;
        width = w;
        x = xc; //x coordinate
        y = yc; //y coordinate
        z = zc; //z coordinate
    }
    void setLength(float l)
    {
        length = l;
    }
    void setHeight(float h)
    {
        height = h;
    }
    void setWidth(float w)
    {
        width = w;
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
    float getLength()
    {
        return length;
    }
    float getHeight()
    {
        return height;
    }
    float getWidth()
    {
        return width;
    }
    float RectangleVol()
    {
        volume = length * height * width;
        return volume;
    }
};

#endif /* rectangle_h */
