#include <iostream>
using namespace std;
void calculation();
void inputValidation();
float employee_number,  // Sentinel

          // User input variables
    gross_pay,
    state_tax_percentage,
    federal_tax_percentage,
    FICA_withholds,
    federal_tax, state_tax,
    // Accumulator Variables
    total_gross_pay = 0,
    total_state_tax = 0,
    total_federal_tax = 0,
    total_tax_sum = 0,
    total_FICA_withholds = 0;
int main()
{

    inputValidation();
    while (employee_number != 0)
    {
        calculation();

        while (total_tax_sum > gross_pay)
        {
            total_FICA_withholds -= FICA_withholds;
            total_federal_tax -= federal_tax;
            total_state_tax -= state_tax;
            total_gross_pay -= gross_pay;

            cout << "Oops. The sum of state tax,\n"
                << "federal, and FICA withholdings\nis"
                << "greater than gross pay. Re-enter\n"
                << "the information again: \n";

            calculation();

        }
        inputValidation();
    }
    //Display Results
    cout << "\nTotal gross pay for all employees         = $" << total_gross_pay
        << "\nTotal state tax for all employees         = $" << total_state_tax
        << "\nTotal federal tax for all employees       = $" << total_federal_tax
        << "\nTotal FICA withholdings for all employees = $" << total_FICA_withholds << endl
        << "Total Net Pay for all employees             =$" << total_gross_pay - total_tax_sum;

    return 0;
}
void calculation() {
    //gross pay
    cout << "Enter gross pay for Employee " << employee_number << ":";
    while (!(cin >> gross_pay) || gross_pay < 0)
    {
        cout << "Error. Gross pay must be greater "
            << "than 0. Gross Pay:\n ";
        cin.clear();
        cin.ignore(123, '\n');
        cout << "\nEnter gross pay: ";
    }
    total_gross_pay += gross_pay;

    //state tax%
    cout << "Enter state tax (%): ";
    while (!(cin >> state_tax_percentage) || state_tax_percentage < 0 || state_tax_percentage > 100)
    {
        cout << "Error. State tax must be greater "
            << "that 0 \nand greater than gross pay."
            << "\nRe-enter state tax:\n ";
        cin.clear();
        cin.ignore(123, '\n');
        cout << "\nEnter state tax (%): ";
    }
    state_tax = (gross_pay * (state_tax_percentage / 100));
    total_state_tax += state_tax;

    //federal tax (%)
    cout << "Enter federal tax (%): ";
    while (!(cin >> federal_tax_percentage) || federal_tax_percentage < 0 || federal_tax_percentage > 100)
    {
        cout << "Error. Federal tax must be greater "
            << "that 0 \nand greater than gross pay."
            << "\nRe-enter federal tax:\n ";
        cin.clear();
        cin.ignore(123, '\n');
        cout << "\nEnter federal tax (%): ";
    }
    federal_tax = (gross_pay * (federal_tax_percentage / 100));
    total_federal_tax += federal_tax;

    // FICA withholdings
    cout << "Enter FICA withholdings: ";
    while (!(cin >> FICA_withholds) || FICA_withholds < 0 || FICA_withholds > gross_pay)
    {
        cout << "Error. FICA withholdings must be "
            << "greater that 0 \nand greater than "
            << "gross pay.\nRe-enter FICA "
            << "withholdings:\n ";
        cin.clear();
        cin.ignore(123, '\n');
        cout << "\nEnter FICA withholdings: ";
    }
    total_FICA_withholds += FICA_withholds;

    total_tax_sum = state_tax + federal_tax + FICA_withholds;
}
void inputValidation()
{
    cout << "Enter employee # (enter 0 to end): ";
    while (!(cin >> employee_number) || employee_number < 0)
    {
        cout << "Error. Employee # must be greater "
            << "that 0. Employee #:\n ";
        cin.clear();
        cin.ignore(123, '\n');
        cout << "\nEnter employee # (enter 0 to end): ";
    }
}