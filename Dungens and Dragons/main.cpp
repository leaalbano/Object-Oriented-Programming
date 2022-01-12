/*
 Lea Albano             05/08/2020
 Assignment 3 - D&D     Section 19
 This assignment simulates a Dungeons and Dragons
 text game using concepts from inheritance.
 */

#include "CommonStatistics.h"
#include "Warrior.h"
#include "Mage.h"
#include "Rogue.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
    srand(time(0));
    shared_ptr<Warrior> war = make_shared<Warrior>(000, 3, 4, 000, 000, "Knight Timmy", 20, 5);
    
    shared_ptr<Mage> mag = make_shared<Mage>(000, 7, 000, "Wizard Gandolfo", 15, 2);
    
    shared_ptr<Rogue> rog = make_shared<Rogue>(000, 7, 5, 000, 000, "Assassin Jim", 10, 3);
    
    //OPENING LINES
    cout << "You are now " << war->getName() << ", a ferocious Warrior" << endl;
    cout << "A Mage named " << mag->getName() << " appears and is ready to battle!" << endl;
    
    //PRINT OUT STATS
    war->printStatsWarrior();
    cout << endl;
    mag->printStatsMage();
    cout << endl;
    
    do{
        int warRoll;
        int magRoll;
        
        warRoll = war->rollInit1();
        magRoll = mag->rollInit2();
        
        //CHECKS THE INITIATIVE ROLL
        if(warRoll > magRoll) //rolls initiative
        {
            war->turn();
            int choice;
            cin >> choice;
            if(choice == 1)
            {
                int myTurn;
                myTurn = war->getBaseAtt();
                mag->receiveDamage(myTurn);
            }
            else if(choice == 2)
            {
                war->healing();
            }
            else if(magRoll > warRoll)
            {
                int otherTurn;
                otherTurn = mag->getBaseAtt();
                war->receiveDamage(otherTurn);
            }
        }
        if(war->getHealth() <= 0)
        {
            cout << "You have been slain!" << endl;
            cout << "GAME OVER" << endl;
            return 0;
        }
        else if(war->getHealth() <= 0)
        {
            cout << "The wizard has been slain!" << endl;
        }
        }while((war->getHealth() > 0) && (mag->getHealth() > 0));
    
        /*if(war->getHealth() <= 0)
        {
            cout << "You have been slain!" << endl;
            cout << "GAME OVER" << endl;
            return 0;
        }
        else if(war->getHealth() <= 0)
        {
            cout << "The wizard has been slain!" << endl;
        }
         */
    
        //----END OF BATTLE FOR MAGE AND WARRIOR---
        
        //---BEGINNING OF BATTLE FOR WARRIOR AND ROGUE---
        
        do{
            
            int warRoll2;
            int rogRoll;
            
            warRoll2 = war->rollInit1();
            rogRoll = rog->rollInit3();
            
            if(warRoll2 > rogRoll) //rolls initiative
            {
                war->turn();
                int choice;
                cin >> choice;
                
                if(choice == 1)
                {
                    int mine;
                    mine = war->getBaseAtt();
                    rog->receiveDamage(mine);
                }
                else if(choice == 2)
                {
                    war->healing();
                }
                else if(rogRoll > warRoll2)
                {
                    int rogTurn;
                    rogTurn = rog->getBaseAtt();
                    war->receiveDamage(rogTurn);
                }
            }
            }while((war->getHealth() > 0) && (rog->getHealth() > 0));
    
            if(war->getHealth() <= 0)
            {
                cout << "You have been slain!" << endl;
                cout << "GAME OVER" << endl;
            }
            else if(rog->getHealth() <= 0)
            {
                cout << "The rogue has been slain!" << endl;
            }
}
