#include<iostream>
using namespace std;

int add(int ); //function prototype
//start of main function
int main()
{
    int n;
    //accepting input from the user
    cout << "Enter a positive integer: ";
    cin >> n;
    cout << "Sum =  " << add(n);
    return 0;
}

int add(int n)
{
    if(n != 0) //condition for recursion
        return n + add(n - 1);
    return 0;
}
