#include "DepositeSaving.h"
void DepositeSaving::depositeBalance()
{
    cout << "\n\t\t\t\t       enter amount in rupees : ";
    cin >> depositeAmount;

    cout << "\t\t\t\t               you deposited RS : " << depositeAmount;
    balance = balance + depositeAmount;
    cout << "\n\t\t\t\t       your new balance is RS : " << balance;
}