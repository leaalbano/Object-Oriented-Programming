/*
 Lea Albano         5/13/2020
 Lab 14             Section 19
 This lab is Solving Problems with Recursion.
 */

#include <iostream>
#include <string>
using namespace std;

int gcd(int x, int y)
{
    if(y == 0) //base
    {
        return x;
    }
    return gcd(y, x % y); //returns the value of the common divisible
}

void frequency(string str)
{
    if(str.size() == 0)
    {
        return;
    }
    frequency(str.substr(1)); //constructs a new string starting from end of orig
    cout << str[0]; // prints our string from first position
}

bool Palindrome(string str, int low, int high)
{
    if (low >= high)
    {
        return true;
    }
    if(str[low] != str[high]) //false when mismatch
    {
        return false;
    }
    return Palindrome(str, low + 1, high - 1); //move to next pair
}

int main()
{
    int choice;
    int choice2;
    cout << "Enter two integers" << endl;
    cin >> choice;
    cin >> choice2;
    cout << "The greatest common divisor of " << choice << " and " << choice2 << " is " << gcd(choice, choice2) << endl;
    cout << endl;
    string a = "stressed";
    cout << "The unaltered string is: " << endl;
    cout << a << endl;
    cout << "The string backwards is: " << endl;
    frequency(a);
    cout << endl;
    cout << endl;
    string str2 = "XYBZBYX";
    int length = str2.length();
    
    if(Palindrome(str2, 0, length - 1))
    {
        cout << "The string " << str2 << " is a Palindrome" << endl;
    }
    else
    {
        cout << "The string " << str2 << " is not a Palindrome" << endl;
    }
    
    string str3 = "XYBYYYX";
    int length2 = str3.length();
    
    if(Palindrome(str3, 0, length2 - 1))
    {
        cout << "The string is " << str3 << " is a Palindrome" << endl;
    }
    else
    {
        cout << "The string " << str3 << " is not a Palindrome" << endl;
        cout << endl;
        return 0;
    }
    
}
