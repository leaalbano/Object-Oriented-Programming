/*
 Lea Albano     Section 19
 Lab: 12        04/28/2020
 This lab prints out character stats using smart pointers
 and abstract classes.
 */

#include <iostream>
#include <string>
#include "Creature.h"
#include "Player.h"
#include "Dragon.h"
#include "WildPig.h"

using namespace std;

int main()
{
    shared_ptr<Player> play = make_shared<Player>("Timmy", "attacking");
    play->drawOnScreen();
    cout << endl;
    
    shared_ptr<Monster> mon = make_shared<Monster>("UFO", "doing monster stuff");
    mon->drawOnScreen();
    cout << endl;
    
    shared_ptr<Wildpig> pig = make_shared<Wildpig>("Piglet", "running");
    pig->drawOnScreen();
    cout << endl;
    
    shared_ptr<Dragon> dra = make_shared<Dragon>("Viserion", "breathing fire");
    dra->drawOnScreen();
    cout << endl;
    
    return 0;
}
