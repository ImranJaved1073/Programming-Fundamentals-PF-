#include <iostream>
using namespace std;

// Global constant variable
const int ARRAY_SIZE = 12;

// Function Prototypes
double inputValidate(double);
void getValues(double[]);
double average(double);
double calculateTotal(double[]);
int findHighestMonths(double[]);
int findLowestMonths(double[]);
void display(double, double, double, double);

int main()
{
    double rainfall[ARRAY_SIZE];

    cout << "Enter average rainfall for each month: " << endl;
    getValues(rainfall);

    double total_rainfall = calculateTotal(rainfall);
    double avarage_rainfall = average(total_rainfall);

    int highestMonth = findHighestMonths(rainfall);

    int lowestMonth = findLowestMonths(rainfall);

    display(total_rainfall, avarage_rainfall, highestMonth, lowestMonth);

    return 0;
} // END int main()

double inputValidate(double user_number)
{
    while (!(cin >> user_number) || user_number < 0)
    {
        cout << "Error: please enter a positive number."
             << "Try again: ";
        cin.clear();
        cin.ignore(333, '\n');
    }
    return user_number;
}

void getValues(double array[])
{
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        cout << (i + 1)
             << ": ";
        array[i] = inputValidate(array[i]);
    }
}

double calculateTotal(double array[])
{
    double total = 0;

    for (int i = 0; i < ARRAY_SIZE; i++)
        total += array[i];

    return total;
}

double average(double sum)
{
    return sum / ARRAY_SIZE;
}

int findHighestMonths(double array[])
{
    double max = array[0];

    for (int i = 1; i < ARRAY_SIZE; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
        else if (array[i] == max)
        {
            max = array[i];
        }
    }
    return max;
}

int findLowestMonths(double array[])
{
    double min = array[0];

    for (int i = 1; i < ARRAY_SIZE; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
        }
        else if (array[i] == min)
        {
            min = array[i];
        }
    }
    return min;
}

void display(double total,
             double average, double highestMonth, double lowestMonth)
{
    const string MONTHS[] = {"January", "February", "March",
                             "April", "May", "June",
                             "July", "August", "September",
                             "October", "November", "December"};

    cout << "\nTotal rainfall for the year   = "
         << total
         << endl;

    cout << "Average monthly rainfall      = "
         << average
         << endl;

    cout << "Month with highest amount     = " << highestMonth;

    cout << endl;

    cout << "Month with lowest amount      = " << lowestMonth;

    cout << endl;
}