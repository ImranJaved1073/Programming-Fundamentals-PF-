#include <iostream>
using namespace std;

int inputValidate(int, int);
int numEmployees();
int daysAbsent(int);
double avgDaysAbsent(int, int);

int main()
{
    int num_employees,
        total_days_absent;

    double avg_days_absent;

    num_employees = numEmployees();
    cout << endl;

    total_days_absent = daysAbsent(num_employees);
    cout << endl;

    avg_days_absent = avgDaysAbsent(num_employees, total_days_absent);
    cout << endl;

    cout << "num_employees = "
         << num_employees
         << endl;

    cout << "total_days_absent = "
         << total_days_absent
         << endl;

    cout << "avg_days_absent = "
         << avg_days_absent
         << '\n'
         << endl;

    return 0;
} // END int main()

// Definition for inputValidate():
int inputValidate(int num1, int num2)
{

    while (!(cin >> num1) || num1 < num2)
    {
        cout << "Error. Integer must not be "
             << " less than " << num2 << ": ";
        cin.clear();
        cin.ignore(222, '\n');
    }

    return num1;
}

// function definition for numEmployees():

int numEmployees()
{
    int num = 0;

    cout << "Enter the number of employees in\n"
         << "the company: ";

    //  cin >> num;
    //  num = inputValidate(num, 1);
    //  return num;

    return inputValidate(num, 1);
}

// function definition for daysAbsent():
int daysAbsent(int num_employees)
{
    int total_days_absent = 0;

    cout << "Enter number of days each employee missed\n"
         << "during the past year: "
         << endl;

    for (int i = 0; i < num_employees; i++)
    {
        cout << "Employee #" << (i + 1) << ": ";
        total_days_absent += inputValidate(total_days_absent, 0);
    }

    return total_days_absent;
}

// function definition for avgDaysAbsent()
double avgDaysAbsent(int num_employees, int days_absent)
{
    // double average = days_absent / static_cast<double>(num_employees);
    // return average;
    return days_absent / static_cast<double>(num_employees);
}