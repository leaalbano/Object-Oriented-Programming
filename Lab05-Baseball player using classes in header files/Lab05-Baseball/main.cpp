#include <iostream>
#include "baseball.h"
using namespace std;
int main()
{
    int i; //ID for shortstop
    int id; //ID for batter
    float ba;  //batting average for shortstop
    float b; //batting average for outfielder
    float average;
    
    BaseBallPlayer catcher;
    cout << "===Welcome to the create yout own baseball team app!===" << endl;
    cout << "No input needed for a catcher...using default values." << endl;
    cout << "Catcher " << catcher.getID() << " generated!" << endl;
    
    cout << "A shortstop requires an ID and Batting Average." << endl;
    cout << "What is the Shortstop's ID?" << endl;
    cin >> i;
    cout << "What is the Shortstop's batting average? (0-1)" << endl;
    cin >> ba;
    if (0>ba||ba>1) //checks to see if input is between 0-1
    {
        cout << "Invalid batting average, input must be between 0-1." << endl;
        cout << "Enter batting average: " << endl;
        cin >> ba;
    }
    
    BaseBallPlayer shortstop(i, ba);
    cout << "Shortstop " << shortstop.getID() << " generated!" << endl;
    
    cout << "An outfielder only requires a batting average." << endl;
    cout << "What is the outfielder's batting average?" << endl;
    cin >> b;
    if (0>b||b>1) //checks if input is between 0-1
    {
        cout << "Invalid batting average, input must be between 0-1." << endl;
        cout << "Enter batting average: " << endl;
        cin >> b;
    }

    BaseBallPlayer outfielder(b);
    cout << "Outfielder " << outfielder.getID() << " generated!" << endl;
    
    cout << "A batter only requires an ID" << endl;
    cout << "What is the batter's ID?" << endl;
    cin >> id;
    BaseBallPlayer batter(id);
    cout << "Batter " << batter.getID() << " generated!" << endl;
    
    cout << "Catcher's Batting Average is " << catcher.getBattingAverage() << endl;
    cout << "Shortstop's Batting Average is " << shortstop.getBattingAverage() << endl;
    cout << "Outfielder's Batting Average is " << outfielder.getBattingAverage() << endl;
    cout << "Batter's Batting Average is " << batter.getBattingAverage() << endl;
    average = (catcher.getBattingAverage() + shortstop.getBattingAverage() + outfielder.getBattingAverage() + batter.getBattingAverage()) / 4;
    
    cout << "The team's collective batting average is " << average << endl;
}

