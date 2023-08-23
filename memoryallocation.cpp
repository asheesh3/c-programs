#include <iostream>
using namespace std;

class shop
{

    int itemId[100];
    int ItemPrice[100];
    int counter;

public:
    void initCounter() { counter = 0; }
    void getPrice(void);
    void displayPrice(void);
};

void shop ::getPrice(void)
{
    cout << "enter Id of your item no" << counter << endl;
    cin >> itemId[counter];

    cout << "enter the price of your item" << endl;
    cin >> ItemPrice[counter];
    counter++;
}

void shop ::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "the price of item with ID" << itemId[i] << "is" << ItemPrice[i] << endl;
    }
}

int main()
{
    shop dukan;
    dukan.initCounter();
    dukan.getPrice();
    dukan.getPrice();
    dukan.getPrice();
    dukan.displayPrice();
    return 0;
}