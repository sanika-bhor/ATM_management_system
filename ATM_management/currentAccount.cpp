#include<iostream>
#include<iomanip>
#include "Account.h"
#include "WithdrawCurrent.h"
#include "DepositeCurrent.h";
using namespace std;

int currentAccount()
{
    int option;
    Account account(250000);
    int pin;
    cout << "\n\n\n\n\n\n\n\n\n" << setw(110) << "***** Automated Teller Machine******" << endl;
    cout << setw(120) << "-------------------------------------------------------------------------";
    cout << "\n" << setw(120) << "**                  MAIN MENU  OF CURRENT ACCOUNT                     **";
    cout << "\n" << setw(120) << "-----------------------------------------------------------------------";
    cout << "\n" << setw(120) << "**                      1.  View my Balance                          **";
    cout << "\n" << setw(120) << "**                      2.  Withdraw Cash                            **";
    cout << "\n" << setw(120) << "**                      3.  Deposit funds                            **";
    cout << "\n" << setw(120) << "**                      4.  Change pin                               **";
    cout << "\n" << setw(120) << "**                      5.  Exit                                     **";
    cout << "\n" << setw(120) << "-----------------------------------------------------------------------";
    cout << "\n" << setw(120) << "-----------------------------------------------------------------------";

    do
    {

        cout << "\n\n\n\t\t\t\t\t\t                          ENTER OPTION: ";
        cin >> option;
        switch (option)
        {
        case 1:
        {
            cout << "\n\t\t\t                 ****** BALANCE INQUIRY ******";
            cout << "\n\t\t\t====================================================================";
            cout << "\n\t\t\t\t         Your balance is : rs " << account.getBalance();
            cout << "\n\t\t\t=====================================================================";
        } break;




        case 2:
        {
            cout << "\n" << setw(120) << "                 ****** WITHDRAW ******";
            cout << "\n" << setw(140) << "====================================================================";
            cout << "\n" << setw(130) << "          YOU CAN WITHDRAW ONLY 75% OF YOUR BALANCE ";
            int updatedBalance = account.getBalance();
            WithdrawCurrent withdraw(updatedBalance);
            withdraw.withdrawBalance();
            account.setBalance(withdraw.getBalance());
            cout << "\n" << setw(140) << "=====================================================================";
        }break;




        case 3: {

            cout << "\n\t\t\t                 ****** DEPOSIT ******";
            cout << "\n\t\t\t====================================================================";
            int updatedBalance = account.getBalance();
            DepositeCurrent deposite(updatedBalance);
            deposite.depositeBalance();
            account.setBalance(deposite.getBalance());
            cout << "\n\t\t\t=====================================================================";
        }break;




        case 4:
        {
            cout << "\n" << setw(120) << "                 ****** CHANGE PIN ******";
            cout << "\n" << setw(140) << "====================================================================";
            for (int i = 0; i < 3; i++)
            {
                cout << "\n" << setw(110) << "       enter your old pin : ";
                cin >> pin;

                if (pin == 5555)
                {
                    break;
                }
                else
                {
                    cout << "\n" << setw(110) << "       wrong pin!!! enter pin again ";
                }
                if (i == 2)
                {
                    return 0;
                }

            }
            cout << "\n" << setw(120) << "               enter your new pin : ";
            cin >> pin;
            cout << "\n" << setw(120) << "      your pin changed successfully  ";
            cout << "\n" << setw(140) << "=====================================================================";
        }break;




        case 5:
            cout << "\n" << setw(110) << "====================================================================";
            cout << "\n" << setw(90) << "                 ****** thank you ******";
            cout << "\n" << setw(110) << "====================================================================";
            return 0;
            break;

        default:
            cout << "THIS IS AN INVALID OPTION PLZ ENTER CORRECT OPTION ";
            break;
        }

    } while (option != 5);

}
