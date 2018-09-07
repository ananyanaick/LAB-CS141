//program to print hollow square pattern
//include library
#include <iostream>
using namespace std;
int main(){
    //declaration and definition of variables
    int i,j;
    //condition
    for (i=1;i<=10;i++)
    {for (j=1;j<=10;j++)
        
    {if ((i==1)||(i==10)||(j==1)||(j==10))
        cout<<"*";
    else
    {cout<<" ";}}
        cout<<endl;}
    return 0;
}
