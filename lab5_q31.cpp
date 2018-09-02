//program to count the number of digits in number
//include library
#include <iostream>
using namespace std;
int main() {
    int n,s,flag=0;
    cout<<"Enter the number you want to count the digits of";
    cin>>n; s=n;
    while (s!=0)
    {s=s/10; flag+=1;}
    //print result
    cout<<" number of digit in "<<n<<"="<<flag;
    //end program
    return 0;

}
