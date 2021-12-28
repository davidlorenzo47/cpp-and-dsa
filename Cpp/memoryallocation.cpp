#include <iostream>
using namespace std;

class Shop
{
    int itemId[100]; //array
    int itemPrice[100]; //array
    int counter; //to track id

public: //by default everything is private
    void initCounter(void) { counter = 0; }//makes counter value 0.
    void setPrice(void); //method
    void displayPrice(void); //method
};

void Shop ::setPrice(void)
{
    cout << "Enter Id of your item no. " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter price of your item" << endl;
    cin >> itemPrice[counter];
    counter++;
}

void Shop ::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of item with Id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{

    Shop shopy;
    shopy.initCounter();
    shopy.setPrice();
    shopy.setPrice();
    shopy.setPrice();
    shopy.displayPrice();
    return 0;
}