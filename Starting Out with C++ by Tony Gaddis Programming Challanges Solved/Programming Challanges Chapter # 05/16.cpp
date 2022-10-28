#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    const int MONTHS = 12;

    float starting_balance,
        annual_interest_rate,
        amount_deposited,
        amount_withdrawn,

        interest_rate,
        monthly_interest_rate,

        balance,
        total_deposits=0,
        total_withdrawn=0,
        total_interest_earned=0;

    int months_since_established;

    cout << "\nEnter annual interest rate: ";
    while (!(cin >> annual_interest_rate))
    {
        cout << "Error: a number must be entered...\n ";
        cin.clear();
        cin.ignore(123, '\n');
        cout << "\nEnter annual interest rate: ";
    }

    cout << "Enter starting balance: ";
    while (!(cin >> starting_balance))
    {
        cout << "Error: a number must be entered...\n ";
        cin.clear();
        cin.ignore(123, '\n');
        cout << "\nEnter starting balance: ";
    }
    balance = starting_balance;

    cout << "Enter # of months passed since account was established: ";
    while (!(cin >> months_since_established) ||
        months_since_established < 0)
    {
        cout << "Error: a number must be entered...\n ";
        cout << "\nEnter # of months passed since account was established: ";
        cin.clear();
        cin.ignore(123, '\n');
        
    }
    monthly_interest_rate = annual_interest_rate / MONTHS;

    for (int i = 1; i <= months_since_established; i++)
    {
        cout << "Enter the amount deposited for month " << i << ": ";
        while (!(cin >> amount_deposited) ||amount_deposited < 0)
        {
            cout << "Error: a positive number must be entered.\n "
                 << "Enter the amount deposited for month "<< i << ": ";
            cin.clear();
            cin.ignore(123, '\n');
        }
        total_deposits += amount_deposited;
        balance += amount_deposited;

        if (balance < 0)
            break;

        cout << "Enter the amount withdrawn for month " << i << ": ";
        while (!(cin >> amount_withdrawn) || amount_withdrawn < 0)
        {
            cout << "Error: a positive number must be entered.\n"
                << "Enter the amount withdrawn for month " << i << ": ";
            cin.clear();
            cin.ignore(123, '\n');
        }
        total_withdrawn += amount_withdrawn;
        balance -= amount_withdrawn;

        if (balance < 0)
            break;

        interest_rate = (monthly_interest_rate * balance);
        balance += interest_rate;

        if (balance < 0)
            break;

        total_interest_earned += (interest_rate);
    } // for loop end

    if (balance < 0)
    {
        cout << "I'm sorry, your account has been closed\n";
        cout << "due to having a negative balance." << endl;
    }
    else
    {
        cout << setprecision(2) << fixed << endl;
        cout << "Starting balance            = $"
            << starting_balance << endl;

        cout << "Ending balance              = $"
            << balance << endl;

        cout << "Total amount in deposits    = $"
            << total_deposits << endl;

        cout << "Total amount in withdrawals = $"
            << total_withdrawn << endl;

        cout << "Total interest earned       = $"
            << total_interest_earned << endl;
    }

    return 0;
}