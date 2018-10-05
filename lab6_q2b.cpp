//including library
#include<iostream>
using namespace std;
//declaring and defining the sum function.
void sum(int x,int y,int &sum)
{
    //adding the values .
    sum=x+y;
}
//defining main function.
int main()
{
    //declare variables and ask the user to set the values using input output operations
    int a,b,c;
    cout<<"\nEnter the two values  to be added.\n”;
    cin>>a>>b;
    //call summing function
    sum(a,b,c);
    cout<<"Sum ="<<c;
    return 0;
    
}
