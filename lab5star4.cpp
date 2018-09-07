//porgram to print star pyramid pattern
//include library
#include <iostream>
using namespace std;
int main(){
    //declaration and definition
    int i,j,k=0;
    for (i=1;i<=10;++i,k=0)
    {for (j=10;j>=i;j--)
    {cout<<" ";}
        while (k!=(2*i-1))
        {cout<<"*";++k;}
             cout<<endl;
        }
             return 0;
}
