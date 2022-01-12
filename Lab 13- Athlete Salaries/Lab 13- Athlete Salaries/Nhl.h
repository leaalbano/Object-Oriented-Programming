#ifndef Nhl_h
#define Nhl_h
#include "Athlete.h"
#include <iostream>
using namespace std;

class Nhl: public Athlete
{
public:
    Nhl(string sport, double sal): Athlete(sport, sal)
    {
        
    }
    virtual void pickLeaguePosition()
    {
        cout << " 1: center" << endl;
        cout << " 2: winger" << endl;
        cout << " 3: defenseMan" << endl;
        cout << " 4: goalie" << endl;
        int choice;
        cin >> choice;
        
        try {
            if(choice < 1 || choice > 4)
            {
                throw string("Invalid output: setting default value 1");
            }
            if(choice == 1)
                position = "center";
            
            else if(choice == 2)
                position = "winger";
            
            else if(choice == 3)
            position = "defenseMan";
            else if(choice == 4)
            position = "goalie";
    }
        catch(string exceptionString)
        {
            cout << exceptionString << endl;
            position = "center";
        }
        
    }
    virtual void displayLeagueSalaryData()
    {
        double avgSal = (salary / 2620000.00) * 100;
        cout << "This athlete's salary of " << setprecision(2) << fixed << salary << endl;
        cout << " compares to " << setprecision(2) << fixed << avgSal << "% of the average" << endl;
        cout << league << " player's salary of $2620000.00" << endl;
    }
};
#endif /* Nba_h */
