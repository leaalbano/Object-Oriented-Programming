/*
 Lea Albano     04/15/2020
 Lab 10: This lab simulates the rolling of 3 dice
 and implements the use of pointers.
 */

#include <iostream>
#include <time.h>
#include <string>
using namespace std;

class Dice
{
public:
    int dice1;
    int dice2;
    int dice3;
    Dice()
    {
        dice1 = rand() % 6+1; //rolls between 1-6
        dice2 = rand() % 6+1;
        dice3 = rand() % 6+1;
    }
    void checkDice() //checks if 2 dice are the same out of 3 rolls
    {
        int total = 0;
        if(dice1 == dice2) //if there is a match
        {
            total++;
        }
        else if(dice2 == dice3)
        {
            total++;
        }
        else if(dice1 == dice3)
        {
            total++;
        }
        if(total == 0)
        {
            cout << "no dice are equal" << endl;
        }
        else if(total == 3)
        {
            cout << "all 3 dice are equal" << endl;
        }
    }
    void checkPtr(shared_ptr<Dice> &s1, shared_ptr<Dice> &s2) // checks if ptr is pointing to same obj
    {
        cout <<"===Checking if pointers are being utilized==="<< endl;
        if(s1==nullptr) //if shared ptr = null, then pointing to nothing
        {
        cout <<"ptr 1 currently points to no obj"<< endl;
        }
        else
        {
        cout << "Ptr 1 currently points to an obj" << endl;
        }
        if(s2 == nullptr)
        {
        cout << "Ptr 2 currently points to no obj" << endl;
        }
        else
        {
        cout << "Ptr 2 currently points to an obj" << endl;
        }
    }
};

int main()
{
        int choice; //used w shared ptr 2
        srand(time(0));
        shared_ptr<Dice> s1(new Dice());
        shared_ptr<Dice> s2(new Dice());
        cout <<"===Creating shared pointer #1 to manage the object==="<< endl;
        cout<< s1->dice1<<endl;
        cout<< s1->dice2<<endl;
        cout<< s1->dice3<<endl;
        s2->checkDice();
        
        cout <<"===now creating shared pointer #2 to manage same obj==="<<endl;
        cout <<"Pick a dice to reroll"<<endl;
        cin >> choice;

    if(choice==1) //reroll dice1
        {
        s2->dice1 = s1->dice2;
        s2->dice3 = s1->dice3;
        cout <<s2->dice1<<endl;
        cout <<s2->dice2<<endl;
        cout <<s2->dice3<<endl;
        s2->checkDice();
        }
        if(choice==2) //reroll dice2
        {
            s2->dice1 = s1->dice1;
            s2->dice3 = s1->dice3;
            cout <<s2->dice1<<endl;
            cout <<s2->dice2<<endl;
            cout <<s2->dice3<<endl;
            s2->checkDice();
        }
        if(choice==3) //reroll dice2
               {
                   s2->dice2 = s1->dice2;
                   s2->dice1 = s1->dice1;
                   cout <<s2->dice1<<endl;
                   cout <<s2->dice2<<endl;
                   cout <<s2->dice3<<endl;
                   s2->checkDice();
               }
    s1->checkPtr(s1,s2);
        s1.get();
        cout <<"Ptr 1's # of references in shared grouping: " << s1.use_count()<<endl;
        cout <<"Ptr 2's # of references in shared grouping: " << s2.use_count()<<endl;
    return 0;
}
