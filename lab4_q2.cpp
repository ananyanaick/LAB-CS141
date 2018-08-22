//program to convert celsius to fahrenheit
#include<iostream> //inlcude library
using namespace std;
int main(){


float fahrenheit , celsius; // delcaration
cout<<" Enter temperature in celsius"; 
cin>>celsius; //input temperature in celsius
fahrenheit = 9/(5*celsius+32); //calculation
cout<<"The temperature in fahrenheit is"<<fahrenheit<<endl;
return 0;
}

