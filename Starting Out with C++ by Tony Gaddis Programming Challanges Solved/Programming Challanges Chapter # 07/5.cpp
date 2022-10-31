#include <iostream>
#define R 3
#define C 5
using namespace std;
int main()
{
    int poundsOfFood[R][C], array[R];
    cout << "How many pounds of food eaten per day:\n";
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cout << "Monkey number" << (i + 1) << " on day " << (j + 1) << ": ";
            while (!(cin >> poundsOfFood[i][j]) || (poundsOfFood[i][j] < 0))
            {
                cout << "Invalid!Pound can't be negative, please try again\n";
                cout << "Monkey number" << (i + 1) << " on day " << (j + 1) << ": ";
                cin.clear();
                cin.ignore(222,'\n');
            }
        }
    }

    double sum = 0;
    int totalElements = R * C;

    for (int row = 0; row < R; row++)
    {
        for (int column = 0; column < C; column++)
            sum += poundsOfFood[row][column];
    }
    cout << "Average amount of food eaten per day by whole family of monkeys = " << sum / totalElements << endl;

    for (int row = 0; row < R; row++)
    {
        sum = 0;
        for (int column = 0; column < C; column++)
            sum += poundsOfFood[row][column];
        array[row] = sum;
    }

    double lowestNumber = array[0], highestNumber = array[0];
    for (int number = 0; number < R; number++)
    {
        if (array[number] < lowestNumber)
            lowestNumber = array[number];
        if (array[number] > highestNumber)
            highestNumber = array[number];
    }
    cout << "The least amount of food eaten during week by monkey is:";
    cout << lowestNumber << endl;
    cout << "The highest amount of food eaten during week by monkey is:";
    cout << highestNumber;
}
/*#include <iostream>
using namespace std;

const int ROWS = 3,
COLUMNS = 5;

double inputValidate();
void getInfo(double[][COLUMNS]);
double getAverage(const double[][COLUMNS]);
double getLeast(const double[][COLUMNS]);
double getHighest(const double[][COLUMNS]);

int main()
{
    double pounds_of_food[ROWS][COLUMNS];
    double average_per_day,
        least_per_week,
        highest_per_week;

    getInfo(pounds_of_food);

    average_per_day = getAverage(pounds_of_food);
    cout << "Average amount eaten during the week per day = "
        << average_per_day
        << endl;

    least_per_week = getLeast(pounds_of_food);
    cout << "Lowest amount eaten during the week = "
        << least_per_week
        << endl;

    highest_per_week = getHighest(pounds_of_food);
    cout << "Highest amount eaten during the week = "
        << highest_per_week
        << endl
        << endl;

    return 0;
} // End int main()

double inputValidate()
{
    double number;
    while (!(cin >> number) || number < 0)
    {
        cout << "Error, enter a positive number: ";
        cin.clear();
        cin.ignore(666, '\n');
    }
    return number;
}

void getInfo(double array[][COLUMNS])
{
    cout << "\nEnter the following information, " << endl
        << "How many pounds of food eaten per day: " << endl;
    for (int row = 0; row < ROWS; row++)
    {
        for (int column = 0; column < COLUMNS; column++)
        {
            cout << "Monkey #"    // monkey #1, on day 1: ksdjfsdfl
                << (row + 1)
                << ", on day "
                << (column + 1)
                << ": ";

            array[row][column] = inputValidate();
        }
        cout << endl;
    }
}

double getAverage(const double array[][COLUMNS])
{
    double columns_sum=0;
    int total_elements = ROWS * COLUMNS; // 15

    for (int row = 0; row < ROWS; row++)
    {
        for (int column = 0; column < COLUMNS; column++)
            columns_sum += array[row][column];
    }

    return columns_sum / total_elements;
}

double getLeast(const double array[][COLUMNS])
{
    double sum,
        local_array[ROWS];

    for (int row = 0; row < ROWS; row++)
    {
        sum = 0;
        for (int column = 0; column < COLUMNS; column++)
            sum += array[row][column];

        local_array[row] = sum;

    }

    double lowest_number = local_array[0];

    for (int number = 1; number < ROWS; number++)
    {
        if (local_array[number] <= lowest_number)
            lowest_number = local_array[number];

    }

    return lowest_number;
}

double getHighest(const double array[][COLUMNS])
{
    double sum,
        local_array[ROWS];

    for (int row = 0; row < ROWS; row++)
    {
        sum = 0;
        for (int column = 0; column < COLUMNS; column++)
            sum += array[row][column];

        local_array[row] = sum;

    }

    double highest_number = local_array[0];
    for (int number = 1; number < ROWS; number++)
    {
        if (local_array[number] >= highest_number)
            highest_number = local_array[number];

    }

    return highest_number;
}*/