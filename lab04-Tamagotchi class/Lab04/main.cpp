/*
 Lea Albano         02/24/2020
 This lab is a remake of a virtual tamagotchi
 using classes.
 */

#include <iostream>
#include <time.h>
#include <string>
using namespace std;
int menu();
class Pet
{
private:
    string name;
    int hunger;
    int happiness;
    int age;
public:
    
    Pet()
    {
        srand(time(0));
        int num = rand()%5+1;
        int num1 = rand()%5+1;
        age = 0;
        happiness = num;
        hunger = num1;
    }
    void setName(string n)
    {
        name = n;
    }
    string getName()
    {
        return name;
    }
    int getHunger()
    {
        return hunger;
    }
    int getHappiness()
    {
        return happiness;
    }
    int getAge()
    {
        return age;
    }
    void stats()
    {
            cout << "-- " << name << "'s stats--" << endl;
            cout << "Hunger: " << hunger << endl;
            cout << "Happiness: " << happiness << endl;
            cout << "Age: " << age << endl;
    }
    void feed()
    {
        cout << name << " dances with joy and devours pasta (+1 Hunger)" << endl;
        cout << name << " is looking like he is about to cry (-1 Happiness" << endl;
        hunger++; // hunger increases by 1
        happiness--; // happiness decreases by 1
    }
    void play()
    {
        cout << name << " goes for bike ride. (+1 Happiness)" << endl;
        cout << name << " is looking hungry. (-1 Hunger)" << endl;
        happiness ++; //happiness increases by 1
        hunger --; //hunger decreases by 1

    }
    void display()
    {
        int decision;
        do
        {
            stats();
            if(age==5)//if pet is 5, then he dies of old age
            {
                cout << name << "died of old age" << endl;
                break;
            }
            decision = menu();
            //user chooses to feed pet
            if (decision == 1)
            {
                feed();
            }
            //user decided to play with pet
            if (decision == 2)
            {
                play();

            }
            age ++;//age increases by 1 after every choice
            if (hunger ==0 || happiness ==0)
            {
                cout << name << " died tragically." << endl;
                break;
            }
        }while(hunger!= 0 && happiness!= 0);//prints out choices as long as
                                //Hunger and Happiness are not 0
    }
};

int main()
{
    Pet Orangutan;
    srand(time(0));
    string n;
    int decision;
    cout << "-Virtual Orangutan-" << endl;
    cout << "---- - m-m------" << endl;
    cout << "     @(o.o)@     " << endl;
    cout << "       (0)~~       " << endl;
    cout << "       o o         " << endl;
    cout << "Please enter a name for your pet" << endl;
    cout << "Orangutan:" << endl;
    cin >> n;//user inputs a name
    Orangutan.setName(n);//name is set into the setName function
    Orangutan.display();
}
//outputs the menu
int menu()
    {
        cout << "Main Menu:" << endl;
        cout << "1. Feed" << endl;
        cout << "2. Play" << endl;
        cout << "Select (1 or 2)" << endl;
        int choice;
        cin >> choice;
        return choice;
    }
