#include <iostream>
#include <cmath> // pow(5, n) = 5^n
using namespace std;

// Function Prototypes
double presentValue(double, double, double);
double inputValidate(double);
char inputValidate(char);

int main()
{
    // Variables
    double P,   // Present value
           F,   // Future value
           r,   // Annual interest rate
           n;   // Number of years
    
    char user_choice;

    do 
    {
        cout << "What is the annual interest rate? ";
        r = inputValidate(r);

        cout << "What is the future value? ";
        F = inputValidate(F);

        cout << "What is the number of years? ";
        n = inputValidate(n);

        P = presentValue(F, r, n);
        cout << "The present value should be: $"
             << P << '\n' << endl;

        cout << "Would you like to make another calculation? (y/n):";
        user_choice = inputValidate(user_choice);
        
        cout << endl;

    } while (user_choice == 'y' || user_choice == 'Y');
    
    return 0;
}

/********************************************************
 * Definition of presentValue function:                 *
 * The presentValue function calculates the present     *
 * value using this formula: P = F / (1 + r)^n          *
 * accepting the future value (F), annual interest rate *
 * (r), and number of years (n) as arguments.           *
 ********************************************************/
double presentValue(double F, double r, double n)
{
    r *= .01; // 3.33% = .0333
    return F / pow((1 + r), n);
}

/********************************************************
 * Definition of inputValidate function:                *
 * This function checks user input. When the            *
 * user enters anything other than a (double), the      *
 * inputValidate will display an error, clear the input *
 * stream, ignore previous input up untill the new      *
 * line (\n) character.                                 *
 ********************************************************/
double inputValidate(double num)
{
    while(!(cin >> num))
    {
        cout << "Error. An integer above 0 must be entered: ";
        cin.clear();
        cin.ignore(1000, '\n');
    }
    return num;
}

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