#include <iostream>
using namespace std;

int main()
{
    float amount, discount = 0, total;
    int premium, unpaid;

    cout << "Enter purchase amount: ";
    cin >> amount;

    cout << "Premium member? (1=Yes, 0=No): ";
    cin >> premium;

    cout << "Previous unpaid order? (1=Yes, 0=No): ";
    cin >> unpaid;

    if (amount > 50000)
        discount = 20;
    else if (amount > 25000)
        discount = 15;
    else if (amount > 10000)
        discount = 10;

    if (premium == 1)
        discount += 5;

    total = amount - (amount * discount / 100);

    if (unpaid == 1)
        cout << "Order Not Confirmed";
    else
    {
        if (total > 20000)
            cout << "Free Delivery" << endl;
        else
            total += 500;

        cout << "Discount = " << discount << "%" << endl;
        cout << "Payable Amount = Rs. " << total << endl;
        cout << "Order Confirmed";
    }

    return 0;
}