//program to calculate area of triangle
#include<iostream> //include library
using namespace std;
int main() {


float base,height,area; // delcaration
cout<<"enter the base length of the triangle";
cin>>base; //input base length
cout<<"enter the height of the triangle";
cin>>height; //input height
area =  0.5*(base*height);
cout<< "the area of the triangle is"<<area<<endl;
return 0;
}

