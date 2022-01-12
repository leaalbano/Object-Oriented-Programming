/*
 Lea Albano     05/05/2020
 Lab 13         Section 19
 This lab is a program that tracks athlete salary
 data from various sports utilizing concepts from
 Polymorphism.
 */

#include "Athlete.h"
#include "Nba.h"
#include "Nhl.h"
#include "Mlb.h"
#include <iostream>
using namespace std;

void sportsPlayed();

int main()
{
    int decision;
    int money;
    shared_ptr<Athlete> unknown = nullptr;
    cout << " Which sport does the athlete play?" << endl;
    cout << " (1-3)" << endl;
    cout << " 1: NBA" << endl;
    cout << " 2: MLB" << endl;
    cout << " 3: NHL" << endl;
    cin >> decision;
    
    try
    {
        if(decision < 1 || decision > 3)
        {
            throw string("Invalid output: setting dafault value 1");
        }
        if(decision == 1)
        {
            cout << "What is the Athlete's salary?" << endl;
            cin >> money;
            
            unknown = make_shared<Nba>("NBA", money);
            
            cout << "Which position does the athlete play?" << endl;
            cout << "(1-5)" << endl;
            
            unknown->pickLeaguePosition();
            cout << endl;
            cout << "Athlete data: " << unknown->getAthleteSport() << " " << unknown->getAthletePosition() << endl;
            
            unknown->displayLeagueSalaryData();
         }
        else if(decision == 2)
        {
            cout << "What is the Athlete's salary?" << endl;
            cin >> money;
            
            unknown = make_shared<Mlb>("MLB", money);
            
            cout << "Which position does the athlete play?" << endl;
            cout << "(1-5)" << endl;
            
            unknown->pickLeaguePosition();
            cout << endl;
            cout << "Athlete data: " << unknown->getAthleteSport() << " " << unknown->getAthletePosition() << endl;
            
            unknown->displayLeagueSalaryData();
        }
        else if(decision == 3)
        {
            cout << "What is the Athlete's salary?" << endl;
            cin >> money;
            
            unknown = make_shared<Nhl>("NHL", money);
            
            cout << "Which position does the athlete play?" << endl;
            cout << "(1-4)" << endl;
            
            unknown->pickLeaguePosition();
            cout << endl;
            cout << "Athlete data: " << unknown->getAthleteSport() << " " << unknown->getAthletePosition() << endl;
            
            unknown->displayLeagueSalaryData();
        }
    }
catch(string exceptionString)
    {
        cout << exceptionString << endl;
        
        cout << "What is the Athlete's salary?" << endl;
        cin >> money;
        
        unknown = make_shared<Nba>("NBA", money);
        
        unknown->pickLeaguePosition();
        cout << endl;
        cout << "Athlete Data: " << unknown->getAthleteSport() << " " << unknown->getAthletePosition() << endl;
        
        unknown->displayLeagueSalaryData();
    }
}
