/*
 Lea Albano         2/05/2020
 Lab 2: Functions
 This lab  simulates a combat based RPG using functions.
 */

#include <iostream>
#include <time.h>
using namespace std;

char menu();
void takeHit(int &playerHP);
int makeAttack(int enemyHP);

int main()
{
    srand(time(0));
    int playerInitial = 20;
    int enemyInitial = 10;
    cout << "Starting the RPG!"<<endl;
    cout << "You spawned with " << playerInitial << " health" << endl;
    do
    {
    char answer = menu();
    if(answer == 'a') // Player chooses to attack
    {
    takeHit(playerInitial); // The enemy attacks you
    enemyInitial = makeAttack(enemyInitial); //the player attacks the enemy
    }
    if(answer == 'b') // Player chooses to run away and the game ends
    {
        cout << "You ran away safely" << endl;
        break;
    }
    }
        while (playerInitial > 0 && enemyInitial > 0);
    
        cout << "GAME OVER" << endl;
   
        
}
 //outputs the menu and returns the user's selection
char menu()
{
    char answer;
    cout << "An enemy lies before you, what will you do?"<<endl;
    cout << "'a'Attack, 'b'Run" << endl;
    cin >> answer;
    return answer;
}
//reads out what the enemy attacks you for and calculates player's updated HP
void takeHit(int &playerHP)
 {
     if(playerHP <=0)
     {
         cout << "You died. GAME OVER" << endl;
     }
     else {
    
     int attackEnemy = (rand() % 3 + 1);
     playerHP-=attackEnemy;
     cout << "The enemy strikes you for " << attackEnemy << " damage!" << endl;
     cout << playerHP << " HP remaining..." << endl;
     }
 }
//reads out what the player attacks the enemy for and calculates enemy's updated HP
int makeAttack(int enemyHP)
{
    if(enemyHP <=0 )
    {
        cout << "Your foe has been slain!" << endl;
    }
    else{
    int getHit = (rand() % 5 + 1);
    enemyHP-=getHit;
    cout << "You strike your foe for " << getHit << " damage!" << endl;
    cout << enemyHP << " enemy HP remaining..." << endl;
    //return enemyHP;
    }
return enemyHP;
}



    

