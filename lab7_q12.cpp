#include <iostream>
using namespace std;


int lcm(int a, int b)//the value of n1 and n2 is passing through a and b
{
    static int m = 0;
    //Increments m by adding max value to it
    m += b;
    // If found a common multiple then return the m.
    if((m % a == 0) && (m % b == 0))
    {
        return m;
    }
    else
    {
        lcm(a, b);//calling the function lcmCalculate itself
    }
}
int main()
{
    int n1, n2, lcmOf;
    cout<<"Enter Two numbers: ";
    cin>>n1>>n2;
    // Ensures that first parameter of lcm must be smaller than 2nd
    if(n1 > n2)
        lcmOf = lcm(n2, n1);//call the function lcmCalculate for lcm calculation
    else
        lcmOf = lcm(n1, n2);//call the function lcmCalculate for lcm calculation
    cout<<"LCM: "<<lcmOf;
    return 0;
}

