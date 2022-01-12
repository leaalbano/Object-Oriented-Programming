/*
 Lea Albano             04/05/2020  Section 19
 Assignment 2: Inventory System
 This assignment simulates an inventory management system for a shop
 while utilizing an Array of Class objects.
 */

#include <iostream>
#include "Item.h"
using namespace std;

int main()
{
    cout <<"===Welcome to the inventory helper===" << endl;
    cout <<"-store hours will begin shortly" << endl;
    cout <<"Please update your inventory..."<< endl;
    cout << endl;
    
    Item inventory[4]; //array of items
    addInventory(inventory); //user adds items to inventory which is stored in inventory array
    display(inventory); //displays menu
    cout << "Business hours are now open" << endl;
    transaction(inventory); // user chooses to buy items
    
}
