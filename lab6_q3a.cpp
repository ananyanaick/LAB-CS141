//include the libraries
#include <iostream>
using namespace std;
//declare and define the function for finding maximum number between the data
int m(int a, int b)
{    //check for max value and assign it to the return variable
    int max;
    if(a>b)
        max=a;
    else if(b>a)
        max=b;
    // return value to main
    return max;
}
int main()
{    int a,b,c;
    // user enters the values of the variables to be used in the function
    cout<<“\nEnter the two values to be compared:\n”;
    cin>>a>>b;
    //call the function and assign its return value to a variable
    c=m(a,b);
    
    if(c==0)
        cout<<"\n the entered numbers are equal\n”;
        else
            cout<<"\n The maximum number between the two is: "<<c;
    return 0;
}
