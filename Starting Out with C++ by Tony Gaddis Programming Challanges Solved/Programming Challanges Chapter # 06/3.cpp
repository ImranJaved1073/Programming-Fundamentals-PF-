#include <iostream>
#include <string>

using namespace std;

const string NE = "North East",
             NW = "North West",
             SE = "South East",
             SW = "South West";

double inputValidate(double);
double getSales(string);
void findHighest(double, double, double, double);
void checkIfHighest(double, double, double, double, string);

int main()
{
    double NE_sales,
        NW_sales,
        SE_sales,
        SW_sales;

    NE_sales = getSales(NE);
    NW_sales = getSales(NW);
    SE_sales = getSales(SE);
    SW_sales = getSales(SW);

    findHighest(NE_sales, NW_sales, SE_sales, SW_sales);

    return 0;
}

double inputValidate(double num)
{
    while (!(cin >> num) || num < 0)
    {
        cout << "Error. An integer above 0 must be entered: ";
        cin.clear();
        cin.ignore(1200, '\n');
    }
    return num;
}

double getSales(string division)
{
    double sales;
    cout << "What is the quarterly sales figure\n"
         << "for " << division << "? $";
    sales = inputValidate(sales);
    cout << endl;
    return sales;
}

void findHighest(double NE_sales, double NW_sales, double SE_sales, double SW_sales)
{
    cout << "The highest grossing division is\n";

    checkIfHighest(NE_sales, NW_sales, SE_sales, SW_sales, NE);
    checkIfHighest(NW_sales, NE_sales, SE_sales, SW_sales, NW);
    checkIfHighest(SE_sales, NE_sales, NW_sales, SW_sales, SE);
    checkIfHighest(SW_sales, NE_sales, NW_sales, SE_sales, SW);

    cout << endl;
}

void checkIfHighest(double sales1, double sales2, double sales3, double sales4, string division)
{
    if (sales1 > sales2 && sales1 > sales3 && sales1 > sales4)
    {
        cout << division << " with a sales figure at: "
             << "$" << sales1;
    }
}

/*
//IMRAN JAVED
//BSEF21M033
//Practice Lab # 04
//Question # 03(Programming Challange Ch 6)

#include <iostream>
#include <string>
#define NE  "North East"
#define NW  "North West"
#define SE  "South East"
#define SW  "South West"
using namespace std;

//Prototypes
double getSales(string);
void findHighest(double, double, double, double);

int main()
{
    double salesNE = getSales(NE); //function call
    double salesNW = getSales(NW);//function call
    double salesSE = getSales(SE);//function call
    double salesSW = getSales(SW);//function call

    findHighest(salesNE, salesNW, salesSE, salesSW);//function call
    return 0;
}


double getSales(string division)
{
    double sales;
    cout << "Enter the quarterly sales for " << division << "= $";
    cin >> sales;
    while (sales < 0)//Input Validation
    {
        cout << "Invalid!Sales must be positive.Enter value again.\n";
        cout << "Enter the quarterly sales for " << division << "= $";
        cin >> sales;
    }
    return sales;
}

//Highet Function definition
void findHighest(double sales1, double sales2, double sales3, double sales4)
{
    if (sales1 > sales2 && sales1 > sales3 && sales1 > sales4)
    {
        cout << "North East has high grossing division with a sales figure at: " << "$" << sales1;
    }
    else if (sales2 > sales1 && sales2 > sales3 && sales2 > sales4)
    {
        cout << "North West has high grossing division with a sales figure at: " << "$" << sales2;
    }
    else if (sales3 > sales1 && sales3 > sales2 && sales3 > sales4)
    {
        cout << "South East has high grossing division with a sales figure at: " << "$" << sales3;
    }
    else
        cout << "South West has high grossing division with a sales figure at: " << "$" << sales4;
}
*/