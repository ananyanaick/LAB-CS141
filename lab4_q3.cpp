//program to convert fahrenheit into celsius
#include<iostream> //include library
using namespace std;
int main(){


float fahrenheit,celsius ;
cout<<"Enter temperature in fahrenheit";
cin>>fahrenheit; // input temperature in fahrenheit
celsius = (fahrenheit-32*5)/9; // calculation for the conversion
cout<< " The temperature in celsius is " <<celsius <<endl;
return 0;
}
