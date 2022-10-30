#include <iostream>
#include <cmath> // pow(5, n) = 5^n
using namespace std;

double inputValidate(double);
char inputValidate(char);
double futureValue(double, double, double);

int main()
{
    double present_value,
           future_value,
           monthly_interest_rate,
           number_of_months;

    char user_choice;

    do
    {
        cout << "Enter account's present value  : ";
        present_value = inputValidate(present_value);

        cout << "Enter monthly interest rate    : ";
        monthly_interest_rate = inputValidate(monthly_interest_rate);

        cout << "Enter number of months         : ";
        number_of_months = inputValidate(number_of_months);

        future_value = futureValue(present_value, monthly_interest_rate, number_of_months);
        cout << "Future value is: $" << future_value  << endl  << endl;

        cout << "Would you like to make another calculation? (y/n):";
        user_choice = inputValidate(user_choice);

        cout << endl;

    } while (user_choice == 'y' || user_choice == 'Y');

    return 0;
}

/********************************************************
 * Definition of inputValidate function:
 * This function checks for positive integers
 ********************************************************/
double inputValidate(double num)
{
    while(!(cin >> num) || num < 0)
    {
        cout << "Error. An integer above 0 must be entered: ";
        cin.clear();
        cin.ignore(1000, '\n');
    }
    return num;
}

/********************************************************
 * Definition of inputValidate function:
 * This function checks for either a 'y' or an 'n'
 ********************************************************/
char inputValidate(char letter)
{
    cin >> letter;

    while (!(letter == 'y' || 
           letter == 'Y' || 
           letter == 'N' || 
           letter == 'n'))
    {
        cout << "ERROR: a Y or an N must be entered: ";
        cin.clear();
        cin.ignore(1000, '\n');
        cin >> letter;
    }

    return letter;
}

/********************************************************
 * Definition of futureValue function:
 * The futureValue function calculates the present
 * value using this formula: 
 * present_value * pow((1 + monthly_interest_rate), number_of_months);
 * accepting the present_value,monthly_interest_rate, 
 * and number_of_months as arguments.
 ********************************************************/
double futureValue(double present_value, double monthly_interest_rate, double number_of_months)
{
    monthly_interest_rate *= .01; // 3.33% = .0333
    
    return present_value * pow((1 + monthly_interest_rate), number_of_months);
}