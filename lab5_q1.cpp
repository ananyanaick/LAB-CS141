//program to find maximun between two numbers
// include library
#include <iostream>

using namespace std;
int main(){
    //declaration and definition
    int x,y;
    cout<<"Enter the two numbers to be compared";
    cin>>x>>y; //input two numbers
    //conditions
    if (x>y)
    {cout<<x<<"is greater than"<<y;}

    else if (x<y)
    {cout<<y<<"is greater than"<<x; }
    
    else
    {cout<<"both are equal numbers";}
        //end of program
        return 0;
    }
