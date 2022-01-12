//
//  main.cpp
//  Project1
//
//  Created by Lea Albano on 1/29/20.
//  Copyright © 2020 Lea Albano. All rights reserved.
//



/*
 Lea Albano         2/05/2020
 Lab 1: 2D Array
 This lab is a gradebook application that will track 3 exam
 scores across 3 students using user input by implementing
 2-Dimensional arrays.
 */

#include <iostream>
using namespace std;
int main()
{
    int change;//user inputs new score for student's exam
    char answer = '\0';//user inputs if they would like to update exam score
    int answer2;//user inputs which student they would like to update
    int answer3;//user inputs which score they want to update
    float average;// will hold the average of the scores
    float sum;//holds the sum of the 3 exams scores per person
    int i=0;// initialize accumulator
    int j=0;// initialize accumulator
    int EXAM [3][3];// array that holds the students and exam scores
    for (i=0; i<3; i++)// keeps track of which student it is
    {
        for (j=0; j<3; j++)// keeps track of which exam number it is
        {
            cout<<"Enter student "<<i+1<<"'s Exam "<< j+1 << " Score."<<endl;//asks for student's score
            cin>>EXAM[i][j];//enters scores into the array
        }
    }

    for (i=0; i<3; i++)// keeps track of which student it is
    {
        for (j=0; j<3; j++)// keeps track of which exam number it is
        {
            cout<<"Student "<< i+ 1<< "'s Exam "<< j+1<< " score is: "<< EXAM[i][j]<<endl;//prints out the
            //student's exam scores
            cout<<""<<endl;//prints out blank line
        }
    }

    
    for (i=0;i<3;++i)
   {
       sum = 0;
       for (j=0; j<3; ++j)
       {
           sum = sum + EXAM[i][j];
       }
       average= sum/3;//calculates the average
       cout<<"The Average Score for Student "<<i+1<<" is "<<average<<endl;//prints out the student's
       //average exam scores
   }
    cout<<"Woud you like to update an exam score Y/N?"<<endl;
    cin>>answer;
   while(answer!='N')//Allows the user to be able to make changes to the exam scores
    {
        
        cout<<"Enter a student's number (1-3):"<<endl;//executes if the user chooses to change scores
        cin>>answer2;
        cout<<"Enter an exam number (1-3):"<<endl;
        cin>>answer3;
        cout<<"Enter a new value for student "<<answer2<<"'s exam "<<answer3<<" score"<<endl;
        cin>>change;
        EXAM[answer2-1][answer3-1]=change;
        cout<<"Student "<<answer2<<"'s exam "<<answer3<<" score is: "<<change<<endl;//replaces student's old score
        //to a new updated score the user wants
        cout<<"Would you like to change the grade for a student?"<<endl;
        cin>>answer;//keeps looping until the user chooses'N'
    }
    for (i=0; i<3; ++i)//calculates the new average when the user chooses to change scores
    {
        sum = 0;
        for (j=0; j<3; ++j)
        {
            sum = sum + EXAM[i][j];
        }
        average= sum/3;//calculates the average
        cout<<"The Average Score for Student "<<i+1<<" is "<<average<<endl;//prints out the student's average exam scores
    }
    return 0;
}
/************************************************************************************************************************************************************************************************
 EXPECTED OUTPUTS:
 Enter Student 1's exam 1 score:
 78
 Enter Student 1's exam 2 score:
 74
 Enter Student 1's exam 3 score:
 88
 Enter Student 2's exam 1 score:
 90
 Enter Student 2's exam 2 score:
 100
 Enter Student 2's exam 3 score:
 65
 Enter Student 3's exam 1 score:
 40
 Enter Student 3's exam 2 score:
 10
 Enter Student 3's exam 2 score:
 60
 Student 1's exam 1 score is: 78
 Student 1's exam 2 score is: 74
 Student 1's exam 3 score is: 88
 
 Student 2's exam 1 score is: 90
 Student 2's exam 2 score is: 100
 Student 2's exam 2 score is: 65
 
 Student 3's exam 1 score is: 40
 Student 3's exam 2 score is: 10
 Student 3's exam 3 score is: 60
 
 The average score for student
 
 
 
 
 
 
 
 
 
 
 */

