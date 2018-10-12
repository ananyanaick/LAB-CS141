//program to find power of any number using recursion
#include <iostream>
using namespace std;

int Power(int, int);         //prototype function to find power

int main()                //start of main function
{
    int b, p, r;                //initialising base power and result
    
    cout << "Enter base number: ";
    cin >> b;
    
    cout << "Enter power number(positive integer): ";
    cin >> p;
    
    r = Power(b, p);
    cout << b << "^" << p << " = " << r;        //printing result
    
    return 0;
}

int Power(int b, int p)            //initialisation and definition of function
{
    if (p != 0)
        return (b*Power(b, p-1));     //recursion stage to repeat said action
    else
        return 1;
}
