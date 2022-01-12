#ifndef baseball_h
#define baseball_h

#include <iostream>
#include <string>
using namespace std;
class BaseBallPlayer
{
private:
    string role;
    int ID;
    float battingAverage;
public:
    BaseBallPlayer(); //catcher
    BaseBallPlayer(int i, float ba); //shortstop
    BaseBallPlayer(float b); //outfielder
    BaseBallPlayer(int id); //batter
    
    int getID();
    float getBattingAverage();
};

    int BaseBallPlayer::getID()
    {
        return ID;
    }
    float BaseBallPlayer::getBattingAverage()
    {
        return battingAverage;
    }
    BaseBallPlayer::BaseBallPlayer() //catcher
    {
    role = "Catcher";
    ID = 999;
    battingAverage = 0.5;
    }
    BaseBallPlayer::BaseBallPlayer(int i, float ba) //shortstop
    {
    role = "Shortstop";
    ID = i;
    battingAverage = ba;
    }
    BaseBallPlayer::BaseBallPlayer(float b) //outfielder
    {
    role = "Outfielder";
    battingAverage = b;
    ID = 999;
    }
    BaseBallPlayer::BaseBallPlayer(int id) //batter
    {
    role = "Batter";
    ID = id;
    battingAverage = 0.5;
    }

#endif /* baseball_h */
