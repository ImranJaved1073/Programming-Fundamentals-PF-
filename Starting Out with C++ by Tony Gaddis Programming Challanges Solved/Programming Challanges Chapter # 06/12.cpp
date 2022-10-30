#include <iostream>
using namespace std;

const double NUMBER_OF_SCORES = 5;

// Function prototypes
double inputValidate(double);
void getJudgeData(double &, string);
void calcScore(double, double, double, double, double);
double findLowest(double, double, double, double, double);
double findHighest(double, double, double, double, double);
char contestantCheck(char &);

int main()
{
    double score1, score2, score3, score4, score5;
    char answer;
    do
    {
        getJudgeData(score1, "1");
        getJudgeData(score2, "2");
        getJudgeData(score3, "3");
        getJudgeData(score4, "4");
        getJudgeData(score5, "5");

        cout << endl
             << "score1 = " << score1 << endl
             << "score2 = " << score2 << endl
             << "score3 = " << score3 << endl
             << "score4 = " << score4 << endl
             << "score5 = " << score5 << endl
             << endl;

        calcScore(score1, score2, score3, score4, score5);
        contestantCheck(answer);
    } while (answer == 'y');
    return 0;
}

// inputValidate() function                  *
double inputValidate(double num)
{

    while (!(cin >> num) || (num < 0 || num > 10))
    {
        cout << "Error. Enter a integer between 0 - 10: ";
        cin.clear();
        cin.ignore(222, '\n');
    }

    return num;
}

// Function definition for void getJudgeData():     *
void getJudgeData(double &score, string score_name)
{
    if (score_name == "1")
        score_name = "1";
    else if (score_name == "2")
        score_name = "2";
    else if (score_name == "3")
        score_name = "3";
    else if (score_name == "4")
        score_name = "4";
    else if (score_name == "5")
        score_name = "5";

    cout << "What is the judge's score "
         << score_name
         << " ? ";

    score = inputValidate(score);
}

// efinition for calcScore()
void calcScore(double score1, double score2, double score3, double score4, double score5)
{
    double lowest = findLowest(score1, score2, score3, score4, score5),
           highest = findHighest(score1, score2, score3, score4, score5),
           average,
           sum = (score1 + score2 + score3 + score4 + score5) - (lowest + highest);

    // sum -= lowest;
    // sum -= highest;

    average = sum / (NUMBER_OF_SCORES - 2);

    cout << endl
         << "lowest  = " << lowest << endl
         << "highest = " << highest << endl
         << endl;
    cout << "average = " << average << endl
         << endl;
}

// findLowest
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

// Fing highest
double findHighest(double score1, double score2, double score3, double score4, double score5)
{
    double highest;
    if (score1 >= score2 && score1 >= score3 && score1 >= score4 && score1 >= score5)
    {
        highest = score1;
        return highest;
    }
    if (score2 >= score1 && score2 >= score3 && score2 >= score4 && score2 >= score5)
    {
        highest = score2;
        return highest;
    }
    if (score3 >= score2 && score3 >= score1 && score3 >= score4 && score3 >= score5)
    {
        highest = score3;
        return highest;
    }
    if (score4 >= score2 && score4 >= score3 && score4 >= score1 && score4 >= score5)
    {
        highest = score4;
        return highest;
    }
    if (score5 >= score2 && score5 >= score3 && score5 >= score4 && score5 >= score1)
    {
        highest = score5;
        return highest;
    }
}

char contestantCheck(char &answer)
{
    cout << "Do you want to enter another contestant? Please type y for yes or n for no.\nAnswer: ";
    cin >> answer;
    while (answer != 'n' && answer != 'y')
    {
        cout << "The only answers allowed are y for yes and n for no.\n";
        cin.clear();
        cin.ignore(200, '\n');
        cin >> answer;
    }
    return answer;
}