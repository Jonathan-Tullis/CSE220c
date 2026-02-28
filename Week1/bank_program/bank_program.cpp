// bank_program.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int id_number = 0;
    string bank_holder;
    float bank_balance;
    float add_sub_amount;

    bool keep_program_open = true;
    int user_choice = 0;
   
    cout << "Enter the name: ";
    cin >> bank_holder;

    cout << "Enter the balance: ";
    cin >> bank_balance;

    cout << "Bank holder: " << bank_holder << endl;
    cout << "Bank balance: " << bank_balance << endl;

    /*
        Keep programming running while bool is false
    */
    while (keep_program_open == true)
    {
        cout << "Account Menu: " << endl;
        cout << endl;
        cout << "0: Quit Program" << endl;
        cout << "1: Display Account Information" << endl;
        cout << "2: Add and deposit to an account" << endl;
        cout << "3: Withdraw from an account" << endl;

        cin >> user_choice;
        if (user_choice == 1)
        {
            cout << "Account Information: " << endl;
            cout << "Bank holder: " << bank_holder << endl;
            cout << "Bank balance: " << bank_balance << endl;
            cout << endl;
            keep_program_open == true;
        }
        else if (user_choice == 2)
        {
            cout << "Amount to deposit: ";
            cin >> add_sub_amount;
            bank_balance += add_sub_amount;
            cout << endl;
            keep_program_open == true;
        }
        else if (user_choice == 3)
        {
            cout << "Amount to withdraw: ";
            cin >> add_sub_amount;
            bank_balance -= add_sub_amount;
            cout << endl;
            keep_program_open == true;
        }
        else
        {
            keep_program_open = false;
        }

    }

}


