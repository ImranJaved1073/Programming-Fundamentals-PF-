#include <iostream>
using namespace std;

// Function prototypes
double inputValidate(double);    
double inputValidate(double, int); 
char inputValidate(char);          
void getTotalDaysOnTrip(int&);
void getDepartureAndArrivalTimes(double&, double&);
void getRoundTripAirfare(double&);
void getCarRentals(double&);
void getPrivateVehicleUsed(double&);
void getParkingFees(int, double&, double&, double&, double&);
void getTaxiFees(int, double&, double&, double&, double&);
void getConferenceAndRegistrationFees(double&);
void getHotelFees(int, double&, double&, double&, double&);
void getMealFees(double&, double, double&, double&, double&, double);
void displayTotals(int, double, double, double, double, double, double);

int main()
{
    double totalExpenses = 0, totalAllowableExpenses = 0, totalReimbursement = 0, totalAmountSaved = 0;
    double departureTime, arrivalTime;
    int totalDaysOnTrip;

    getTotalDaysOnTrip(totalDaysOnTrip);
    getDepartureAndArrivalTimes(departureTime, arrivalTime);
    getRoundTripAirfare(totalExpenses);
    getCarRentals(totalExpenses);
    getPrivateVehicleUsed(totalExpenses);
    getParkingFees(totalDaysOnTrip, totalExpenses, totalAllowableExpenses, totalReimbursement, totalAmountSaved);
    getTaxiFees(totalDaysOnTrip, totalExpenses, totalAllowableExpenses, totalReimbursement, totalAmountSaved);
    getConferenceAndRegistrationFees(totalExpenses);
    getHotelFees(totalDaysOnTrip, totalExpenses, totalAllowableExpenses, totalReimbursement, totalAmountSaved);
    getMealFees(totalExpenses, departureTime, totalAllowableExpenses, totalReimbursement, totalAmountSaved, arrivalTime);
    displayTotals(totalDaysOnTrip, departureTime, arrivalTime, totalExpenses, totalAllowableExpenses, totalReimbursement, totalAmountSaved);

    return 0;
} // END int main()

double inputValidate(double time) 
{
    while (!(cin >> time) || ((time < 0 || time > 23.59) || (time - static_cast<int>(time)) > .59))
    {
        cout << "Error: a valid time must be entered. Try again: ";
        cin.clear();
        cin.ignore(222, '\n');
    }
    return time;
}

double inputValidate(double number, int range)
{
    while (!(cin >> number) || number < range)
    {
        cout << "Error: number must be greater than " << range << ". Try again: ";
        cin.clear();
        cin.ignore(333, '\n');
    }

    return number;
}

char inputValidate(char letter)
{
    cin >> letter;

    while (!(letter == 'Y' || letter == 'y' || letter == 'N' || letter == 'n'))
    {
        cout << "Error: enter 'Y' for Yes or 'N' for No. Try again: ";
        cin.clear();
        cin.ignore(555, '\n');
        cin >> letter;
    }

    return letter;
}

void getTotalDaysOnTrip(int& totalDaysOnTrip)
{
    cout << "How many days spent on the trip? ";
    totalDaysOnTrip = inputValidate(totalDaysOnTrip, 0);
}

void getDepartureAndArrivalTimes(double& departureTime, double& arrivalTime)
{
    cout << "\nWhat is the time of departure \non the first day of the trip?\n";
    cout << "(Use 24 hour clock to enter departure and arrial times.\n"
        << "Also, instead of using a colon, use a decimal point.\n"
        << "For example, 6:30am = 6.30 and 9:30pm = 21.30): ";
    departureTime = inputValidate(departureTime);

    cout << "\nWhat is the time of arrival back\nhome on the last day of trip? ";
    arrivalTime = inputValidate(arrivalTime);
}

void getRoundTripAirfare(double& totalExpenses)
{
    cout << "\nAny round-trip airfare? (Y/N): ";
    char userChoice = inputValidate(userChoice);

    if (userChoice == 'Y' || userChoice == 'y')
    {
        cout << "What was the amount for round-trip airfare? $";
        double roundTripAirfare = inputValidate(roundTripAirfare, 0);
        totalExpenses += roundTripAirfare;
    }
}

void getCarRentals(double& totalExpenses)
{
    cout << "\nAny car rentals? (Y/N): ";
    char userChoice = inputValidate(userChoice);

    if (userChoice == 'Y' || userChoice == 'y')
    {
        cout << "What was the amount of car rental? $";
        double carRentalFee = inputValidate(carRentalFee, 0);
        totalExpenses += carRentalFee;
    }
}

void getPrivateVehicleUsed(double& totalExpenses)
{
    cout << "\nWas a private vehicle used? (Y/N): " << endl;
    char userChoice = inputValidate(userChoice);

    if (userChoice == 'Y' || userChoice == 'y')
    {
        const double CENTS_PER_MILE = .27;

        cout << "How many miles driven?\n(The vehicle expense is calculated as $0.27 per mile driven): ";
        int milesDriven = inputValidate(milesDriven, 0);
        totalExpenses += (milesDriven * CENTS_PER_MILE);
    }
}

void getParkingFees(int totalDaysOnTtrip, double& totalExpenses, double& totalAllowableExpenses,
    double& totalReimbursement, double& totalAmountSaved)
{
    cout << "\nAny parking fees? (The company allows up to $6 per day.) (Y/N): ";
    char userChoice = inputValidate(userChoice);

    if (userChoice == 'Y' || userChoice == 'y')
    {
        const double ALLOWABLE_EXPENSES = 6.00;
        double parkingFee;

        for (int i = 0; i < totalDaysOnTtrip; i++)
        {
            totalAllowableExpenses += ALLOWABLE_EXPENSES;

            cout << "Enter parking fees for day #" << (i + 1) << ": $";
            parkingFee = inputValidate(parkingFee, 0);

            totalExpenses += parkingFee;

            if (parkingFee > ALLOWABLE_EXPENSES) // 9 > 6
                totalReimbursement += (parkingFee - ALLOWABLE_EXPENSES);

            else if (parkingFee <= ALLOWABLE_EXPENSES)
                totalAmountSaved += parkingFee; // 6.00
        }
    }
}

void getTaxiFees(int totalDaysOnTrip, double& totalExpenses, double& totalAllowableExpenses,
    double& totalReimbursement, double& totalAmountSaved)
{
    cout << "\nAny Taxi fees? (The company allows up to $10 per day): ";
    char userChoice = inputValidate(userChoice);

    if (userChoice == 'Y' || userChoice == 'y')
    {
        const double ALLOWABLE_EXPENSES = 10.00;
        double taxiFee;

        for (int i = 0; i < totalDaysOnTrip; i++)
        {
            totalAllowableExpenses += ALLOWABLE_EXPENSES;

            cout << "Enter taxi fees for day #" << (i + 1) << ": ";
            taxiFee = inputValidate(taxiFee, 0);

            totalExpenses += taxiFee;

            if (taxiFee > ALLOWABLE_EXPENSES) // 11.00 > 10.00 == 1.00
                totalReimbursement += (taxiFee - ALLOWABLE_EXPENSES);

            else if (taxiFee <= ALLOWABLE_EXPENSES) // 6.00 < 10.00 == 6.00
                totalAmountSaved += taxiFee;
        }
    }
}

void getConferenceAndRegistrationFees(double& totalExpenses)
{
    cout << "\nAny conference or seminar registration fees? (Y/N): ";
    char userChoice = inputValidate(userChoice);

    if (userChoice == 'Y' || userChoice == 'y')
    {
        cout << "Enter conference or seminar registration fees: ";
        double conferenceOrSeminarFees =
            inputValidate(conferenceOrSeminarFees, 0);

        totalExpenses += conferenceOrSeminarFees;
    }
}

void getHotelFees(int totalDaysOnTrip, double& totalExpenses, double& totalAllowableExpenses,
    double& totalReimbursement, double& totalAmountSaved)
{
    const double ALLOWABLE_EXPENSES = 90.00;
    double hotelFee;

    cout << "\nNow, enter hotel expenses.\n(The company allows up to $90 per night for lodging.):\n";

    for (int i = 0; i < (totalDaysOnTrip - 1); i++) // 5 = 4 nights
    {
        totalAllowableExpenses += ALLOWABLE_EXPENSES;

        cout << "How much for night #" << (i + 1) << ": ";
        hotelFee = inputValidate(hotelFee, 0);

        totalExpenses += hotelFee;

        if (hotelFee > ALLOWABLE_EXPENSES) // 100 > 90 == 10
            totalReimbursement += (hotelFee - ALLOWABLE_EXPENSES);

        else if (hotelFee <= ALLOWABLE_EXPENSES) // 80 < 90 = 80
            totalAmountSaved += hotelFee;
    }
}

void getMealFees(double& totalExpenses, double departureTime,
    double& totalAllowableExpenses, double& totalReimbursement,
    double& totalAmountSaved, double arrivalTime)
{
    const double ALLOWABLE_BREAKFAST = 9.00,ALLOWABLE_LUNCH = 12.00,ALLOWABLE_DINNER = 16.00;

    double mealFee;

    cout << "\nDid you eat a meal upon depature flight? (Y/N): ";
    char userChoice = inputValidate(userChoice);

    if (userChoice == 'Y' || userChoice == 'y')
    {
        cout << "How much was your meal? ";
        mealFee = inputValidate(mealFee, 0);

        totalExpenses += mealFee;

        if (departureTime < 7)
        {
            totalAllowableExpenses += ALLOWABLE_BREAKFAST;

            if (mealFee > ALLOWABLE_BREAKFAST) // 11 > 9 = 2.00
                totalReimbursement += (mealFee - ALLOWABLE_BREAKFAST);

            else if (mealFee <= ALLOWABLE_BREAKFAST)
                totalAmountSaved += mealFee; // 8 < 9
        }

        else if (departureTime >= 7 && departureTime < 12)
        {
            totalAllowableExpenses += ALLOWABLE_LUNCH;

            if (mealFee > ALLOWABLE_LUNCH) // 13 > 12 = $1.00
                totalReimbursement += (mealFee - ALLOWABLE_LUNCH);

            else if (mealFee <= ALLOWABLE_LUNCH) // 3.00 > 12 =
                totalAmountSaved += mealFee;
        }

        else if (departureTime >= 12 && departureTime < 18)
        {
            totalAllowableExpenses += ALLOWABLE_DINNER;

            if (mealFee > ALLOWABLE_DINNER)
                totalReimbursement += (mealFee - ALLOWABLE_DINNER);

            else if (mealFee <= ALLOWABLE_DINNER)
                totalAmountSaved += mealFee;
        }

        else if (departureTime >= 18)
            totalReimbursement += mealFee;
    }

    cout << "\nDid you eat a meal when upon arrival flight? ";
    userChoice = inputValidate(userChoice);

    if (userChoice == 'Y' || userChoice == 'y')
    {
        cout << "How much was your meal? ";
        mealFee = inputValidate(mealFee, 0);

        totalExpenses += mealFee;

        if (arrivalTime <= 8)
            totalReimbursement += mealFee;

        else if (arrivalTime > 8 && arrivalTime <= 13)
        {
            totalAllowableExpenses += ALLOWABLE_BREAKFAST;

            if (mealFee > ALLOWABLE_BREAKFAST)
                totalReimbursement += (mealFee - ALLOWABLE_BREAKFAST);

            else if (mealFee <= ALLOWABLE_BREAKFAST)
                totalAmountSaved += mealFee;
        }

        else if (arrivalTime > 13 && arrivalTime <= 19)
        {
            totalAllowableExpenses += ALLOWABLE_LUNCH;

            if (mealFee > ALLOWABLE_LUNCH) // 13.00 > 12.00 == 1.00
                totalReimbursement += (mealFee - ALLOWABLE_LUNCH);

            else if (mealFee <= ALLOWABLE_LUNCH)
                totalAmountSaved += mealFee; // 12.00 < n;
        }

        else if (arrivalTime > 19)
        {
            totalAllowableExpenses += ALLOWABLE_DINNER;

            if (mealFee > ALLOWABLE_DINNER)
                totalReimbursement += (mealFee - ALLOWABLE_DINNER);

            else if (mealFee <= ALLOWABLE_DINNER)
                totalAmountSaved += mealFee;
        }
    }
}

void displayTotals(int totalDaysOnTrip, double departureTime, double arrivalTime,
    double totalExpenses, double totalAllowableExpenses,
    double totalReimbursement, double totalAmountSaved)
{
    cout << "\nTotal days on trip: " << totalDaysOnTrip << endl;
    cout << "Time of departure: " << departureTime << endl;
    cout << "Time of arrival: " << arrivalTime << endl;
    cout << "Total expenses: $" << totalExpenses << endl;
    cout << "Total allowable expenses: $" << totalAllowableExpenses << endl;
    cout << "Total reimbursement: $" << totalReimbursement << endl;
    cout << "Total amount saved: $" << totalAmountSaved << endl
        << endl;
}
