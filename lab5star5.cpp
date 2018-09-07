//program to print inverted pyramid
//include library
#include<iostream>
using namespace std;
int main(){
    //declaration and definition
    int i,j;
    for (i=1;i<=10;i++)
    {for (j=1;j<i;j++)
    {cout<<" ";}
    
    
        for(j=1;j<=(10*2-(i*2-1));j++)
    
    {cout<<"*";}
    
        cout<<endl;}
    //end program
    return 0;
}
