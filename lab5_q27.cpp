//program to find sum of all natural numbers from 1 to n
//include library
#include<iostream>
using namespace std;
int main(){
//declaration and definition of variables
    int s=0,n,i=1;
    cout<<"Enter the the number till you want to find sum of";
    cin>>n;
    while (i<=n)
    {s=s+i; i++;}
    //display sum
    cout<<" sum of natural numbers till "<<n<< "is"<<s;
    //end program
    return 0;}
    
