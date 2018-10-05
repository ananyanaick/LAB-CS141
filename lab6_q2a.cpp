//include the library files and start the main
#include<iostream>
using namespace std;
//declaring and defining the sum function.
void sum(int a,int b)
{
    //finding the sum
    int sum=a+b;
    //printing the sum in a+b=sum format
    cout<<a<<"+"<<b<<"="<<sum;
    cout<<endl;
}
//end of function.
int main()
{
    
    //declare variables to which the numbers are stored
    cout<<"Program to find sum of two functions using functions";     //using the call by value method.
    int a,b;
    cout<<“\nEnter the two numbers to be added\n”;
    cin>>a>>b;
    
    //calling the function by value
    sum(a,b);
    return 0;
}
