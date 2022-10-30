#include <iostream>
#include <string>

using namespace std;

const string NORTH = "North",
             SOUTH = "South",
             EAST = "East",
             WEST = "West",
             CENTRAL = "Central";

double inputValidate(double);
int getNumAccidents(string);
void findLowest(double, double, double, double, double);
void checkIfSmallest(double, double, double, double, double, string);

int main()
{
    double N_total, S_total, E_total, W_total, C_total;

    N_total = getNumAccidents(NORTH);
    S_total = getNumAccidents(SOUTH);
    E_total = getNumAccidents(EAST);
    W_total = getNumAccidents(WEST);
    C_total = getNumAccidents(CENTRAL);

    findLowest(N_total, S_total, E_total, W_total, C_total);

    return 0;
}

double inputValidate(double num)
{
    while (!(cin >> num) || num < 0)
    {
        cout << "Error. An integer above 0 must be entered: ";
        cin.clear();
        cin.ignore(1200, '\n');
    }
    return num;
}

int getNumAccidents(string region)
{
    double num;
    cout << "What is the number of automobile accidents "
         << "reported in the " << region << " region "
         << "during the last year? ";

    num = inputValidate(num);
    cout << endl;

    return num;
}

void findLowest(double N_total, double S_total, double E_total, double W_total, double C_total)
{
    cout << "The lowest grossing division is\n";

    checkIfSmallest(N_total, S_total, E_total, W_total, C_total, NORTH);
    checkIfSmallest(S_total, N_total, E_total, W_total, C_total, SOUTH);
    checkIfSmallest(E_total, N_total, S_total, W_total, C_total, EAST);
    checkIfSmallest(W_total, N_total, S_total, E_total, C_total, WEST);
    checkIfSmallest(C_total, N_total, S_total, E_total, W_total, CENTRAL);

    cout << endl;
}

void checkIfSmallest(double total1, double total2, double total3, double total4, double total5, string region)
{
    if (total1 < total2 && total1 < total3 && total1 < total4 && total1 < total5)
    {
        cout << region << ", has Fewest reported Accidents last year which are:\n"
             << total1 << '.';
    }
}