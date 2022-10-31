#include <iostream>
#include <fstream>
#include<string>
#define R 3
#define C 30
using namespace std;
int main()
{
    char weatherCond[R][C];
    string weatherType[R] = { "Rainy", "Cloudy", "Sunny" };
    string month[R] = { "June", "July", "August" };
    char weatherDay[R] = { 'R', 'C', 'S' };
    ifstream fin;
    fin.open("RainOrShine.txt");
    if (!fin) {
        cout << "Error!File not found.";
    }
    else
    {
        for (int row = 0; row < R; row++)
        {
            for (int col = 0; col < C; col++)
                fin >> weatherCond[row][col];
        }
        int total;
        for (int i = 0; i < R; i++) {
            for (int row = 0; row < R; row++)
            {
                total = 0;
                for (int col = 0; col < C; col++) {
                    if (weatherCond[row][col] == weatherDay[i])
                    {
                        total++;
                    }
                }
                cout << "Total " << weatherType[i] << " days for " << month[row] << " = " << total << endl;
                
            }
            cout << endl;
        }

        for (int i = 0; i < R; i++) {
            total = 0;
            for (int row = 0; row < R; row++)
            {
                for (int col = 0; col < C; col++) {
                    if (weatherCond[row][col] == weatherDay[i])
                    {
                        total++;
                    }
                }

            }
        cout << total <<" days were " << weatherType[i] << " during 3 months period.\n" ;
        }

        int sum;
        int totalRainyDays[R];

        for (int row = 0; row < R; row++)
        {
            sum = 0;
            for (int col = 0; col < C; col++)
                if (weatherCond[row][col] == 'R')
                {
                    sum++;
                }

            totalRainyDays[row] = sum;
        }
        cout << endl;

        int highestRainyDay = totalRainyDays[0];
        string highestRainyDayName = month[0];

        for (int i = 1; i < R; i++)
        {
            if (totalRainyDays[i] > highestRainyDay)
            {
                highestRainyDay = totalRainyDays[i];
                highestRainyDayName = month[i];
            }

        }

        cout << highestRainyDayName << " had the highest rainy days " << "having " << highestRainyDay << " days." << endl;
        cout << endl;
        fin.close();
    }
}

/*#include <iostream>
#include <fstream>
using namespace std;

const int ROWS = 3, 
          COLUMNS = 30;

string weather_types[ROWS]  = {"Rainy", "Cloudy", "Sunny"};
string months[ROWS]         = {"June", "July", "August"};
char weather_day_names[ROWS]= {'R', 'C', 'S'};

void getInfoFromFile(char[][COLUMNS], string);
void displayMonths(const char[][COLUMNS], int);
void displayDays(const char[][COLUMNS], int);
void displayHighest(const char[][COLUMNS]);

int main()
{
    char weather_conditions[ROWS][COLUMNS];

    getInfoFromFile(weather_conditions, "RainOrShine.txt");

    for (int letter = 0; letter < ROWS; letter++)
        displayDays(weather_conditions, letter);
    
    for (int i = 0; i < ROWS; i++)
        displayMonths(weather_conditions, i);

    displayHighest(weather_conditions);

    cout << endl;

    return 0;
} // End int main()

void getInfoFromFile(char array[][COLUMNS], string file_name)
{
    ifstream inputFile;

    inputFile.open(file_name);

    for(int row = 0; row < ROWS; row++)
    {
        for(int col = 0; col < COLUMNS; col++)
            inputFile >> array[row][col];
    }

    inputFile.close();
}

void displayDays(const char array[][COLUMNS], int i)
{
    int total;
    for (int row = 0; row < ROWS; row++)
    { 
        total = 0;
        for (int col = 0; col < COLUMNS; col++)
            if (array[row][col] == weather_day_names[i]) { total++; }

        cout << "Total "
             << weather_types[i]
             << " days for "
             << months[row]
             << " = "
             << total
             << endl;
    }
    cout << endl;
}

void displayMonths(const char array[][COLUMNS], int i)
{
    int total = 0;
    for(int row = 0; row < ROWS; row++)
    {
        for(int col = 0; col < COLUMNS; col++)
            if(array[row][col] == weather_day_names[i]) { total++; }
    }

    cout << "Total "
         << weather_types[i]
         << " days for all months = "
         << total
         << endl;

}

void displayHighest(const char array[][COLUMNS])
{
    int sum;
    int total_rainy_days[ROWS];
    
    for (int row = 0; row < ROWS; row++)
    {
        sum = 0;
        for (int col = 0; col < COLUMNS; col++)
            if (array[row][col] == 'R') { sum++; }
            
        total_rainy_days[row] = sum;
    }

    cout << endl;


    int highest_rainy_day = total_rainy_days[0];
    string highest_rainy_day_name = months[0];

    for(int i = 1; i < ROWS; i++)
    {
        if(total_rainy_days[i] > highest_rainy_day)
        {
            highest_rainy_day = total_rainy_days[i];
            highest_rainy_day_name = months[i];
        } 
        else if(total_rainy_days[i] == highest_rainy_day)
        {
            highest_rainy_day = total_rainy_days[i];
            highest_rainy_day_name += ", ";
            highest_rainy_day_name += months[i];
        }
            
    }

    cout << highest_rainy_day_name
         << " had the highest rainy days, "
         << "with "
         << highest_rainy_day
         << " days."
         << endl;
}*/
