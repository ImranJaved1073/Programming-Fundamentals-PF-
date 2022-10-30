#include <iostream>
#include <iomanip>
using namespace std;

double inputValidate(double);
void getScore(double &);
void calcAverage(double, double, double, double, double);
double findLowest(double, double, double, double, double);

int main()
{
    double score1, score2, score3, score4, score5;

    getScore(score1);
    getScore(score2);
    getScore(score3);
    getScore(score4);
    getScore(score5);

    calcAverage(score1, score2, score3, score4, score5);

    return 0;
}

/********************************************************
 * Definition of inputValidate function:                *
 * This function checks user input. When the            *
 * user enters anything other than an (int) or anything *
 * not within a 0-100 range, it will display an error,  *
 * clear the input stream, ignore previous input up     *
 * untill the new line (\n) character.                  *
 ********************************************************/
double inputValidate(double num)
{
    while (!(cin >> num) || (num < 0 || num > 100))
    {
        cout << "Error. An integer from 0-100 must be entered: ";
        cin.clear();
        cin.ignore(1000, '\n');
    }
    return num;
}

void getScore(double &num)
{
    cout << "What is the testscore: ";
    num = inputValidate(num);
}

/********************************************************
 * Function Definition for void calcAverage():          *
 * calcAverage() should calculate and display the       *
 * average of the four highest scores. This function    *
 * should be called just once by main and should be     *
 * passed the five scores.                              *
 ********************************************************/
void calcAverage(double score1, double score2, double score3, double score4, double score5)
{

    double average;

    double lowest = findLowest(score1, score2, score3, score4, score5);
    cout << "The lowest score is " << lowest << endl;

    average = ((score1 + score2 + score3 + score4 + score5) - lowest) / 4.0;

    cout << setw(4);
    cout << fixed << showpoint << setprecision(2);
    cout << "The average of the 4 highest scores is " << average << endl;
}

/********************************************************
 * Function Definition for int findLowest():            *
 * findLowest() should find and return the lowest of    *
 * the five scores passed to it. It should be called by *
 * calcAverage, which uses the function to determine    *
 * which of the five scores to drop.                    *
 ********************************************************/
double findLowest(double score1, double score2, double score3, double score4, double score5)
{
    double lowest;
    if (score1 <= score2 && score1 <= score3 && score1 <= score4 && score1 <= score5)
    {
        lowest = score1;
        return lowest;
    }
    if (score2 <= score1 && score2 <= score3 && score2 <= score4 && score2 <= score5)
    {
        lowest = score2;
        return lowest;
    }
    if (score3 <= score2 && score3 <= score1 && score3 <= score4 && score3 <= score5)
    {
        lowest = score3;
        return lowest;
    }
    if (score4 <= score2 && score4 <= score3 && score4 <= score1 && score4 <= score5)
    {
        lowest = score4;
        return lowest;
    }
    if (score5 <= score2 && score5 <= score3 && score5 <= score4 && score5 <= score1)
    {
        lowest = score5;
        return lowest;
    }
}