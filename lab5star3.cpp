//program to print right triangle pattern
//iclude library
#include <iostream>
using namespace std;
int main(){
    //declaration and definiton of variables
    int i ,j;
    //loop
    for (i=1; i<=10; i++)
    {for (j=1; j<=i; ++j)
    {cout<<"*";
    }
        cout<<endl;
        }// end program
    return 0;
}
