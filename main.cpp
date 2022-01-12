/*
 Lea Albano        3/4/2020
 This program is a remake of Tic-tac-toe
 implementing 2D-arrays
 */
#include <iostream>
using namespace std;

void printArr(char arr[][3]);
void initArr(char arr[][3]);
char gameWon(char arr[][3]);
void playerChoice(char arr[][3]);

int main()
{
    
    cout << "Welcome to Tic-Tac-Toe" << endl;
    cout << "======================" << endl;
        char arr[3][3];
        initArr(arr);
        playerChoice(arr);
    
}
//this function prints out the tic-tac-toe board
void printArr(char arr[][3])
{
    for(int rows = 0; rows < 3; rows++)
      {
          
          for(int cols = 0; cols < 3; cols++)
          {
              cout << arr[rows][cols];
              if (cols < 2) {
                  cout << "|";
              }
          }
          cout << endl;
          if(rows < 2)
          {
              cout << "-----";
          }
          cout << endl;
      }
}
//this initializes the tic-tac-toe board
void initArr(char arr[][3])
{
    for(int rows = 0; rows < 3; rows++)
    {
        for(int cols = 0; cols < 3; cols++)
        {
            arr[rows][cols] = ' ';
        }
    }
}
//this function checks if there is a win
char gameWon(char arr[][3])
{
    char winner = ' ';
    bool checkWinner = false;
    do
    {
        //checks three in a straight row
    for(int rows = 0; rows < 3; ++rows)
    {
        if( (arr[rows][0] == arr[rows][1]) && (arr[rows][1] == arr[rows][2]) )
        {
            winner = arr[rows][0];
            checkWinner = true;
        }
        else{
            checkWinner = false;
        }
    }
        //checks three in a straight column
    for(int cols = 0; cols < 3; ++cols)
    {
        if( (arr[0][cols] == arr[1][cols]) && (arr[1][cols] == arr[2][cols]) )
        {
            winner = arr[0][cols];
            checkWinner = true;
        }
        else{
            checkWinner = false;
        }
    }
        //checks for three in a diagonal line
        if( (arr[0][0] == arr[1][1]) && (arr[1][1] == arr[2][2]))
           {
            checkWinner = true;
               winner=arr[0][0];
        }
        else if( (arr[2][0] == arr[1][1]) && (arr[1][1] == arr[0][2]))
           {
            checkWinner = true;
               winner = arr[2][0];
        }
        else{
            checkWinner=false;
        }
    }while (checkWinner==false);
    return winner;
}

void playerChoice(char arr[][3])
{
    char final = ' ';
    //int checker = 0;
    int player = 1;
    char set1 = 'X';
    char set2 = 'O';
    int choice;
    int choice2;
    do{
    //player 1's turn
    cout << "Player " << player << " turn " << set1 << endl;
    printArr(arr);
    cout << "Which row would you like?" << endl;
    cin >> choice;
    cout << "Which col would you like?" << endl;
    cin >> choice2;
    arr[choice][choice2] = set1;
    player++;
    //final=gameWon(arr);
        
        
    //player 2's turn
    cout << "Player " << player << " turn " << set2 << endl;
    printArr(arr);
    cout << "Which row would you like?" << endl;
    cin >> choice;
    cout << "Which col would you like?" << endl;
    cin >> choice2;
    
    arr[choice][choice2] = set2;
    player--;
        
      final= gameWon(arr);
        cout <<final<<endl;
        cout<<"hello"<<endl;

    }while(final!='w');
    cout<<"hello"<<endl;
}
