//program to print all natural numbers from 1 to n
// include library
#include <iostream>
using namespace std;
int main(){
    //declare and define variables
    int n, i=1;
    cout<<"Enter the number last number to be printed";
    cin>>n;
    //loop
    while(i<=n)
    {
        cout<<"  "<<i;
        i++;
        
    }
    cout<<"/n";
    //end of program
    return 0;
}
