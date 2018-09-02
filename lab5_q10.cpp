//program to verify whether the alphabet is in upper or lower case
//include library
#include <iostream>
using namespace std;
int main(){
    //declaration and definition of variables
    char a;
    cout<<"Enter the alphabet in either upper or lower case";
    cin>>a; //input alphabet
    //give conditions
    if (a>='A' && a<='Z')
    {cout<<"The alphabet is upper case";}
    else if (a>= 'a' && a<= 'z')
    {cout<<"The alpha bet is lower case";}
    //end program
    return 0;
}

