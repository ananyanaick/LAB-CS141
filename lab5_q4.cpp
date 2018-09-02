//program to find whether number is divisible by 5 and 11 or not
//include library
#include <iostream>
using namespace std;
int main(){
    //declaration and definiton of variables
    int a;
    cout<<"Enter number";
    cin>>a; //imput number to be verified
    //give conditions
    if (a%5==0 && a%11==0)
    {cout<<"The number is divisible by both 5 and 11";}
    else
    {cout<<"The number is not divisible by both 5 and 11";}
    //end program
    return 0;
}
