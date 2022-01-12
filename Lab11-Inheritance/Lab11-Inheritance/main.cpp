/*
 Lea Albano     04/15/2020
 Lab 11: This lab is testing out inheritance classes by creating shape dimensions.
 */

#include <iostream>
#include <string>
#include "sphere.h"
#include "cylinder.h"
#include "rectangle.h"
using namespace std;

int main()
{
    cout << "=== Creating objects with default constructor ===" << endl;
    shared_ptr<Sphere> Sph = make_shared<Sphere>("Sphere");
    cout << Sph->getName() << " Info:" << endl;
    cout << "The center coordinate is at X:" << Sph->getX() << " Y:" << Sph->getY() << " Z:" << Sph->getZ() << endl;
    cout << "Dimensions - radius: " << Sph->getRadius() << endl;
    cout << "The volume is " << Sph->SphereVol() << endl;
    
    shared_ptr <Rectangle> box = make_shared<Rectangle>("Rectangular box");
    cout << box->getName() << " Info: " << endl;
    cout << "The center coordinate is at X:" << box->getX() << " Y:" << box->getY() << " Z:" << box->getZ() << endl;
    cout << "Dimenstions - Height: " << box->getHeight() << " Length: " << box->getLength() << " Width: " << box->getWidth() << endl;
    cout << "The volume is: " << box->RectangleVol() << endl;
    
    shared_ptr <Cylinder> circ = make_shared<Cylinder>("Cylinder");
    cout << circ->getName() << " Info: " << endl;
    cout << "The center coordinate is at X:" << circ->getX() << " Y:" << circ->getY() << " Z:" << circ->getZ() << endl;
    cout << "Dimenstions - Height: " << circ->getHeight() << " Radius: " << circ->getRadius() << endl;
    cout << "The volume is: " << circ->CylinderVol() << endl;
    
    cout << "=== Creating objects with overloaded constructor! ===" << endl;
    
    shared_ptr<Sphere> Sp = make_shared<Sphere>(3.5, 2, 2, 5, "Sphere");
    cout << Sp->getName() << " Info: " << endl;
    cout << "The center coordinate is at X:" << Sp->getX() << " Y:" << Sp->getY() << " Z:" << Sp->getZ() << endl;
    cout << "Dimensions - Radius: " << Sp->getRadius() << endl;
    cout << "The volume is: " << Sp->SphereVol() << endl;
    
    shared_ptr<Rectangle> bo = make_shared<Rectangle>(3.2, 2.5, 1.5, 5, 0, (-5),  "Rectanglular box");
    cout << bo->getName() << " Info: " << endl;
    cout << "The center coordinate is at X:" << bo->getX() << " Y:" << bo->getY() << " Z:" << bo->getZ() << endl;
    cout << "Dimensions - Height: " << bo->getHeight() << " Length: " << bo->getLength() << " Width: " << bo->getWidth() <<endl;
    cout << "The volume is: " << bo->RectangleVol() << endl;
    
    shared_ptr<Cylinder> cir = make_shared<Cylinder>(4, 1.75, 1, 1, 1, "Cylinder");
    cout << cir->getName() << " Info: " << endl;
    cout << "The center coordinate is at X:" << cir->getX() << " Y:" << cir->getY() << " Z:" << cir->getZ() << endl;
    cout << "Dimensions - Height: " << cir->getHeight() << " Radius: "<< cir->getRadius() << endl;
    cout << "The volume is: " << cir->CylinderVol() << endl;
}
