#ifndef Nba_h
#define Nba_h
#include "Athlete.h"
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

class Nba: public Athlete
{
public:
    Nba(string sport, double sal): Athlete(sport, sal)
    {
        
    }
    virtual void pickLeaguePosition()
    {
        cout << " 1: point guard" << endl;
        cout << " 2: shooting guard" << endl;
        cout << " 3: small forward" << endl;
        cout << " 4: power forward" << endl;
        cout << " 5: center" << endl;
        int choice;
        cin >> choice;
        
        try {
            if(choice < 1 || choice > 5)
            {
                throw string("Invalid output: setting default value 1");
            }
            if(choice == 1)
                position = "point guard";
            
            else if(choice == 2)
                position = "shooting guard";
            
            else if(choice == 3)
            position = "small forward";
            else if(choice == 4)
            position = "power forward";
            else if(choice == 5)
            position = "center";
    }
        catch(string exceptionString)
        {
            cout << exceptionString << endl;
            position = "point guard";
        }
        
    }
    virtual void displayLeagueSalaryData()
    {
        double avgSal = (salary / 4580000.00) * 100;
        cout << "This athlete's salary of " << setprecision(2) << fixed << salary << endl;
        cout << " compares to " << setprecision(2) << fixed << avgSal << "% of the average" << endl;
        cout << league << " player's salary of $4580000.00" << endl;
    }
};

#endif /* Nba_h */
