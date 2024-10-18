#include <iostream>
#include <math.h>

using namespace std;
int choice, accountNo, deposit, berries;
// Welcome to BRO CODE bank Money will be reffered to as Berries for safety reasons

void showBalance(int accountNo, int Account[3]);
int creditBerries(int accountNo, int berries, int Account[3]);
int debitBerries(int accountNo, int berries, int Account[3]);

int main()
{

    int Account[3] = {0, 0, 0};

    // for (int i = 0; i < 3; i++)
    // {
    //     cout << "Before Starting deposit some berries: ";
    //     cin >> deposit;
    //     cout << "Enter acNo: ";
    //     cin >> accountNo;
    //     creditBerries(accountNo, deposit, Account);
    // }

    cout << "Your account is empty make sure to deposit some money before the 4 month deadline :)\n";
    while (true)
    {
        cout << "Welcome to BRO CODE bank :)\n";
        cout << "Press 1 to check balance\n";
        cout << "Press 2 to credit berries\n";
        cout << "Press 3 to debit berries\n";
        cout << "Press 4 to exit the program\n";

        cout << "Enter: ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "AC/No.: ";
            cin >> accountNo;
            showBalance(accountNo, Account);
        }
        else if (choice == 2)
        {
            cout << "AC/No.: ";
            cin >> accountNo;
            cout << "Enter amount: ";
            cin >> berries;
            int cd = creditBerries(accountNo, berries, Account);
            if (cd == 0)
            {
                cout << "Successfully Credited!!\n";
            }
            else
            {
                cout << "Sorry some transaction error occured!!\n";
            }
        }
        else if (choice == 3)
        {
            cout << "AC/No.: ";
            cin >> accountNo;
            cout << "Enter amount: ";
            cin >> berries;
            int db = debitBerries(accountNo, berries, Account);
        }
        else if (choice == 4)
        {
            cout << "Thank You for using BRO CODE bank :)\n";
            break;
        }
        else
        {
            break;
        }
    }

    return 0;
}

void showBalance(int accountNo, int Account[3])
{
    int pin;

    if (accountNo == 10238)
    {
        cout << "Pin: ";
        cin >> pin;

        if (pin == 2005)
        {
            cout << "Dont Share your accountNo and Pin ;)" << '\n';
            cout << "Balance: " << Account[0] << '\n';
        }
    }
    else if (accountNo == 10057)
    {
        cout << "Pin: ";
        cin >> pin;

        if (pin == 2006)
        {
            cout << "Dont Share your accountNo and Pin ;)" << '\n';
            cout << "Balance: " << Account[1] << '\n';
        }
    }
    else if (accountNo == 10430)
    {
        cout << "Pin: ";
        cin >> pin;

        if (pin == 2004)
        {
            cout << "Dont Share your accountNo and Pin ;)" << '\n';
            cout << "Balance: " << Account[2] << '\n';
        }
    }
}

int creditBerries(int accountNo, int berries, int Account[3])
{
    int pin;

    if (accountNo == 10238)
    {
        cout << "Pin: ";
        cin >> pin;

        if (pin == 2005)
        {
            Account[0] += berries;
            cout << "Credited: " << berries << '\n';
            return 0;
        }
    }
    else if (accountNo == 10057)
    {
        cout << "Pin: ";
        cin >> pin;

        if (pin == 2006)
        {
            Account[1] += berries;
            cout << "Credited: " << berries << '\n';
            return 0;
        }
    }
    else if (accountNo == 10430)
    {
        cout << "Pin: ";
        cin >> pin;

        if (pin == 2004)
        {
            Account[2] += berries;
            cout << "Credited: " << berries << '\n';
            return 0;
        }
    }
    return 1;
}

int debitBerries(int accountNo, int berries, int Account[3])
{
    int pin;

    if (accountNo == 10238)
    {
        cout << "Pin: ";
        cin >> pin;

        if (pin == 2005)
        {
            if (Account[0] >= berries)
            {
                cout << "Current Balance: " << Account[0] << '\n';
                Account[0] -= berries;
                cout << "Successfully debited: " << berries << '\n';
            }
            else
            {
                cout << "Insufficient Balance\n";
            }
        }
    }
    else if (accountNo == 10057)
    {
        cout << "Pin: ";
        cin >> pin;

        if (pin == 2006)
        {
            if (Account[1] >= berries)
            {
                cout << "Current Balance: " << Account[1] << '\n';
                Account[1] -= berries;

                cout << "Successfully debited: " << berries << '\n';
            }
            else
            {
                cout << "Insufficient Balance\n";
            }
        }
    }
    else if (accountNo == 10430)
    {
        cout << "Pin: ";
        cin >> pin;

        if (pin == 2004)
        {
            if (Account[2] >= berries)
            {
                cout << "Current Balance: " << Account[2] << '\n';
                Account[2] -= berries;

                cout << "Successfully debited: " << berries << '\n';
            }
            else
            {
                cout << "Insufficient Balance\n";
            }
        }
    }
    return 0;
}
