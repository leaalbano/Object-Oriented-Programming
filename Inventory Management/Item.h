#ifndef Item_h
#define Item_h
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class Item
{
private:
    string Name;
    int ID;
    int amount;
    double value;
public:
    void addInventory(Item inventory[4]); //user adds 4 inventory items
    void display(Item inventory[4]); //displays menu
    void transaction(Item inventory[4]); //user is able to purchase items
                                        //updated menu is shown after every purchase
    void discount(Item inventory[4]); //gives user option to add discount to prices

    void setName(string n)
    {
        Name = n;
    }
    string getName()
    {
        return Name;
    }
    void setID(int i)
    {
        ID = i;
    }
    int getID()
    {
        return ID;
    }
    void setAmount(int a)
    {
        amount = a;
    }
    int getAmount()
    {
        return amount;
    }
    void setValue(double v)
    {
        value = v;
    }
    double getValue()
    {
        return value;
    }
    
};

void addInventory(Item inventory[4])
{
    int i = 0; //starts at first index of array
    string n; //name of item
    int ID; //item ID
    int amount; //how many of each item there is
    double value; //the price of the item
    
    while(i<4) //has user input name, ID, value, and amount of item 4 times
    {
        cout << "Enter item " << i + 1 << " to add to inventory" << endl;
        cout << "Please enter the product name" << endl;
        cin >> n; //name
        inventory[i].setName(n);
        cout << "Enter product manufacturer's id" << endl;
        cin >> ID; //ID
        inventory[i].setID(ID);
        cout << "Enter the retail value" << endl;
        cin >> value;
        inventory[i].setValue(value);
        cout << "Enter quantity available" << endl;
        cin >> amount;
        inventory[i].setAmount(amount);
        i++;
    }
}

//displays the menu
void display(Item inventory[4])
{
    int i=0; //starts at first index of array
    //this loop prints out the item names, ID, amount, and value
    for(i=0; i<4; i++) //loop iterates 4 times
    {
        cout << i+1 << ") " << inventory[i].getAmount() << " " << inventory[i].getName() << " left in stock at $" << inventory[i].getValue() << " item ID: " << inventory[i].getID() << endl;
    }
}

//gives discount after 2 transactions
void discount(Item inventory[4])
    {
    char discountAnswer; //used when user inputs (y/n) for if they want to enter a discount
    double discount; //user enters discount amount
    int i; //initializer for the for loop
    
    cout << "2 items sold!" << endl;
    cout << "Sale starting!" << endl;
    cout << "Would you like to enter a discount %? (y/n)" << endl;
    cin >> discountAnswer; //enters (y/n)
        if(discountAnswer == 'y')
            {
                cout << "Enter the custom discount percentage: " << endl;
                cin >> discount; //enters discount percentage
            }
        //default discount given if they choose not to enter a discount
        else
            {
            discount = 0.15;
            }
        for(i = 0; i < 4; i++) //iterates throughout inventory array
            //updates the old menu to the new discounted menu
            {
                double newValue = inventory[i].getValue() - (inventory[i].getValue() * discount); //calculates how much to subtract from original value
                inventory[i].setValue(newValue); //sets menu prices to new discounted price
                
                cout << "Price for " << inventory[i].getName() << " on sale for $" << fixed << setprecision(2) << newValue << endl;
            }
    }


//user chooses to perform a transaction or not
//user gets to buy items
void transaction(Item inventory[4])
{
    char choice; //when user chooses to buy items or not (y/n)
    int option; //chooses which menu item they want to purchase (1-4)
    int amount; //user inputs how many of each item they want
    int newAmount; //the new amount of items available after each purchase
    int saleCount = 0; //counts how many transactions are done, starts at zero
    
    cout << "Would you like to perform a transaction? (y/n)" << endl;
    cin >> choice;
    while(choice == 'y') //user chooses yes
    {
        if(saleCount == 2)//if 2 transactions are done
        {
            discount(inventory); //runs the discount function
        }
        cout << "====MENU===="<< endl;
        cout << "Enter which item you would like to purchase (1-4)" << endl;
        display(inventory); //displays inventory menu
        cin >> option; //user chooses 1-4 which item they want
        cout << "How many would you like to buy?" << endl;
        cin >> amount; //user enters amount they want
        //checks to see if there is enough items in stock
        //checks if user's input is less then or equal to inventory available
        //if inventory is less then user input, user has to input a new amount
        if(inventory[option - 1].getAmount() <= amount)
        {
            while(inventory[option - 1].getAmount() <= amount)
            {
                cout << "Not enough " << inventory[option - 1].getName() << " in stock (" << inventory[option - 1].getAmount() << ") total stock" << endl;
                cout << "Enter new amount" << endl;
                cin >> amount; //user has to enter new amount until it is less than or equal to amount available
            }
        }
        //prints out # of items sold along with how much it all costs
        cout << "SOLD " << amount << " " << inventory[option -1].getName() << " for $" << inventory[option -1].getValue() * amount << endl;
        saleCount++; //sale count increases by 1 with each transaction
        newAmount = inventory[option-1].getAmount() - amount; //updates inventory amount
        inventory[option-1].setAmount(newAmount);
        cout << "Would you like to perform another purchase?" << endl; //asks user if they want to make another purchase
        cin >> choice;
    }
    if(choice == 'n') //user chooses 'n' when asked to make another purchase
    {
        cout << "Closing Shop -- inventory left" << endl;
        display(inventory); //displays remaining inventory
    }
}
#endif /* Item_h */

