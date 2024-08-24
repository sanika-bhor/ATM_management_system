#include<iostream>
#include<iomanip>
using namespace std;

int savingAccount();
int currentAccount();
int main()
{
    int pin;
    int a;

    cout << "\n\n\n " << setw(118) << "  ******************************************************************************" << endl;
    cout << setw(108) << " *********************************************************" << endl;
    cout << setw(103) << "         ****************    *****     ****************" << endl;
    cout << setw(94) << " ********    *****     *******" << endl;
    cout << setw(89) << "  **    *****     **" << endl;
    cout << setw(89) << "  **    *****     **" << endl;
    cout << setw(89) << "  **    *****     **" << endl;
    cout << setw(89) << "  **    *****     **" << endl;
    cout << setw(89) << "  **    *****     **" << endl;
    cout << setw(89) << "  **    *****     **" << endl;
    cout << setw(88) << "  *    *****     *" << endl;
    cout << setw(85) << "         *     " << endl;
    cout << setw(30) << "=================================================================================================";
    cout << "===========================================================";
    cout << setw(95) << " Welcome To (GPA ATM) service";
    cout << "\n" << setw(90) << " Architect By :";
    cout << "\n" << setw(95) << " ### Sanika Bhor (SY IT) ### \n";
    cout << setw(30) << "=================================================================================================";
    cout << "===========================================================";
    cout << "\n" << setw(70) << "********* Pin for user is 5555 **********";

    for (int i = 0; i < 3; i++)
    {
        cout << "\n\n" << setw(50) << "ENTER YOUR PIN: ";
        cin >> pin;


        if (pin == 5555)
        {
            cout << "\n";

            break;
        }
        else
        {
            cout << setw(90) << " PLEASE TRY AGAIN !!!!! Wrong pin entered";
        }

        if (i == 2)
        {
            return 0;
        }
    }

    cout << "\n\n\n" << setw(20) << " TYPE OF ACCOUNT : " << endl;

    cout << setw(16) << " 1. Saving" << endl;
    cout << setw(17) << " 2. Current" << endl;
    cout << setw(20) << "Which type of account is your: ";
    cin >> a;

    switch (a)
    {
    case 1:
        savingAccount();
        break;

    case 2:
        currentAccount();
        break;
    }
}