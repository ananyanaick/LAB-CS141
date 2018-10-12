#include <iostream>

Using namespace std;
/* Function declaration */


int printNaturalNumbers(int lowerLimit, int upperLimit);



int main()
{
    int lowerLimit, upperLimit;
    
    /* Input lower and upper limit from user */
    cout<<"Enter lower limit: ";
    cin>>lowerLimit;
    cout<<"Enter; upper limit:";
    cin>>upperLimit;
    cout<<"All natural numbers from limits are :";
    printNaturalNumbers(lowerLimit, upperLimit);
    
    return 0;
}


/*
 Recursively prints all natural number between the given range.
 */
int printNaturalNumbers(int lowerLimit, int upperLimit)
{
    if(lowerLimit > upperLimit)
        return 0;
    
    cout<<lowerLimit<<",";
    
    // Recursively call the function to print next number
    printNaturalNumbers(lowerLimit + 1, upperLimit);
    return 0;
}
