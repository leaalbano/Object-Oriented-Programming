#ifndef Mlb_h
#define Mlb_h
#include "Athlete.h"
#include <iostream>
using namespace std;

class Mlb: public Athlete
{
public:
    Mlb(string sport, double sal): Athlete(sport, sal)
    {
        
    }
    virtual void pickLeaguePosition()
    {
        cout << " 1: pitcher" << endl;
        cout << " 2: catcher" << endl;
        cout << " 3: baseman" << endl;
        cout << " 4: shortstop" << endl;
        cout << " 5: outfielder" << endl;
        int choice;
        cin >> choice;
        
        try {
            if(choice < 1 || choice > 5)
            {
                throw string("Invalid output: setting default value 1");
            }
            if(choice == 1)
                position = "pitcher";
            
            else if(choice == 2)
                position = "catcher";
            
            else if(choice == 3)
            position = "baseman";
            else if(choice == 4)
            position = "shortstop";
            else if(choice == 5)
            position = "outfielder";
    }
        catch(string exceptionString)
        {
            cout << exceptionString << endl;
            position = "pitcher";
        }
        
    }
    virtual void displayLeagueSalaryData()
    {
        double avgSal = (salary / 4170000.00) * 100;
        cout << "This athlete's salary of " << setprecision(2) << fixed << salary << endl;
        cout << " compares to " << setprecision(2) << fixed << avgSal << "% of the average" << endl;
        cout << league << " player's salary of $4170000.00" << endl;
    }
};
#endif /* Mlb_h */
