//including library
#include <iostream>
using namespace std;
/*
 Write a function that obtains from the user and returns a value for unitCost, units, and taxRate to the calling module. Choose an appropriate name for this function.
 */
void return3values(int &unitCost, int &units, int &taxRate)
{
    cout << "Enter unitCost";
    cin >> unitCost;
    cout << "Enter units";
    cin >> units;
    cout << "Enter taxRate”;
    cin >> taxRate;
}

/*
 Write a function that receives the unitCost, units, and taxRt and returns to the calling module the salesTax and totalDue. Choose an appropriate name for this function.
 */

void calculate(int unitCost, int units, int taxRate, int & salesTax, int & totalDue)
{
    // that receives the unitCost, units, and taxRate
    // Code to calculate salesTax
    salesTax = taxRate*(units*unitCost);
    // Code to totDue
    totalDue = salesTax+(units*unitCost);
    // returns to the calling module the salesTx and totDue.
    // this is done by reference
}

/*
 function that will receive the unitCost, units, taxRate, salesTax, and totalDue and outputs them . an appropriate name is chosen for this function.
 */

void printvalue(int unitCost, int units, int taxRt, int salesTx, int totDue)
{
    cout<<"\n"<<unitCost<<" "<<units<<" "<<taxRt<<" "<<salesTx<<" "<<totDue;
}

/*
 Write a main function with variables called unitCost, unitsPurchase, taxRate, salesTax, and totalDue. Your program should call the functions listed above.
 Pseudocode and Indentation must be present.
 */

int main()
{     int unitCost,units,taxrate;
    // Ask for unitCost,units,taxrate
    return3values(unitCost, units, taxRate);
    // Unitcost
    int salesTax = 0, totDue = 0;
    calculate(unitCost,units,taxRt,salesTax,totalDue);
    // all values are filled.
    void printvalue(unitCost,units,taxRate,salesTax,totalDue);
    return 0;
}
