//program to find the first and last digit of the number
//include library
#include <iostream>
using namespace std;
int main(){
    //decleration and definition of variables
    int n,s=1,f=0,t;
    cout<<"Enter any number";
    cin>>n;
    //loop
    while(n>s)
    {f++;
        s=s*10;
        if (f==1)
        {t=n%10;}
    } //print result
    cout<<"last digit="<<t;
    s=s/10;
    t=n/s;
    cout<<"first digit ="<<t;
    //end program
    return 0;
    }

