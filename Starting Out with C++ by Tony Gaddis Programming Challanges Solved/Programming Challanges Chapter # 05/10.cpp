#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int NUM_OF_MONTHS = 12;

    int num_of_years,
        total_num_of_months = 0;

    double rainfall,
        total_rainfall=0,
        average_rainfall_per_month;

    cout << "\nEnter number of years: ";
    while (!(cin >> num_of_years) || (num_of_years < 1))
    {
        cout << "\nERROR: number of years must be greater that 0 \n";
        cin.clear();
        cin.ignore(1230, '\n');
        cout << "\nEnter number of years:\n";
    }
    cout << "You've entered " << num_of_years << " years." << endl;

    for (int i = 1; i <= num_of_years; i++)
    {
        cout << "Year " << i << ": " << endl;
        for (int j = 1; j <= NUM_OF_MONTHS; j++)
        {
            cout << "How much rainfall (inches)\n" << "for month " << j << ": ";
            while (!(cin >> rainfall) || (rainfall < 0))
            {
                cout << "\nERROR: rainfall must be a positive number \n";
                cin.clear();
                cin.ignore(1230, '\n');
                cout << "\nHow much rainfall (inches)\n" << "for month " << j << ": ";
            }
            total_rainfall += rainfall;
            total_num_of_months++;
        }
    }
    average_rainfall_per_month = total_rainfall / total_num_of_months;

    //display results
    cout << setprecision(2) << fixed;
    cout << "\nTotal number of months = " << total_num_of_months << endl;
    cout << "Total inches of rainfall = " << total_rainfall << endl;
    cout << "Average rainfall per month = " << average_rainfall_per_month << endl;

    return 0;
}