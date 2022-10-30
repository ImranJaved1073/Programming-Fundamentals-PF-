#include <iostream>
using namespace std;

// function prototypes
double calculateTotalCharges(double, double);
double calculateTotalCharges(double, double, double, double);

int main()
{
    char choice;
    double daysSpent, dailyRate, medicationCharges, servicesCharge, totalCharges;

    cout << "You have admitted as an inpatient or an outpatient? " << endl
         << "Enter 1 for inpatient or 2 for outpatient\n";
    cin >> choice;
    while (!(choice == '1' || choice == '2')) // input validation
    {
        cout << "Choice is invalid.Choice must be 1 or 2.\n";
        cin.clear();
        cin.ignore(222, '\n');
        cin >> choice;
    }

    if (choice == '1')
    {
        cout << "Number of days spent in the hospital: ";
        while (!(cin >> daysSpent) || daysSpent < 0) // input validation
        {
            cout << "Days Cannot be negative Enter days again.\n";
            cin.clear();
            cin.ignore(222, '\n');
        }

        cout << "Daily rate: Rs.";

        while (!(cin >> dailyRate) || dailyRate < 0)
        {
            cout << "Rate Cannot be negative Enter rate again.\n";
            cin.clear();
            cin.ignore(222, '\n');
        }

        cout << "Hospital medication charges: Rs.";
        while (!(cin >> medicationCharges) || medicationCharges < 0) // input validation
        {
            cout << "Mediaction Charges Cannot be negative Enter its charges again.\n";
            cin.clear();
            cin.ignore(222, '\n');
        }

        cout << "Charges for hospital services(lab tests, etc.): Rs.";
        while (!(cin >> servicesCharge) || servicesCharge < 0) // input validation
        {
            cout << "Services Charge Cannot be negative Enter its charges again.\n";
            cin.clear();
            cin.ignore(222, '\n');
        }

        totalCharges = calculateTotalCharges(daysSpent, dailyRate, medicationCharges, servicesCharge);

        cout << "Total Charges = Rs." << totalCharges << endl;
    }
    else
    {
        cout << "Hospital medication charges: Rs.";
        while (!(cin >> medicationCharges) || medicationCharges < 0) // input validation
        {
            cout << "Mediaction Charges Cannot be negative Enter its charges again.\n";
            cin.clear();
            cin.ignore(222, '\n');
        }

        cout << "Charges for hospital services(lab tests, etc.): Rs.";
        while (!(cin >> servicesCharge) || servicesCharge < 0) // input validation
        {
            cout << "Services Charge Cannot be negative Enter its charges again.\n";
            cin.clear();
            cin.ignore(222, '\n');
        }

        totalCharges = calculateTotalCharges(medicationCharges, servicesCharge);

        cout << "Total Charges = Rs." << totalCharges << endl;
    }
}

// Funtions body
double calculateTotalCharges(double med_charges, double services_charge)
{
    return med_charges + services_charge;
}

double calculateTotalCharges(double days_spent, double daily_rate, double med_charges, double services_charge)
{
    return (days_spent * daily_rate) + med_charges + services_charge;
}
