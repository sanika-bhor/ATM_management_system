#include "WithdrawSaving.h"

int WithdrawSaving::withdrawBalance()
{
    cout << "\n" << setw(125) << "          enter amount in rupees : ";
    cin >> withdrawAmount;
    if (withdrawAmount > 12500)
    {
        cout << "\n" << setw(140) << " *****you have not saficient amount for withdraw ******";
        return 0;

    }
    else
    {
        cout << "\n" << setw(120) << "                 you withdraw RS : " << withdrawAmount;
        balance = (balance - withdrawAmount);
        cout << "\n" << setw(120) << "       your remaining balance is : " << balance;
    }
}