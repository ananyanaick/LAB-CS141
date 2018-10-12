#include <iostream>
using namespace std;

int reverse(int num)
{
    
    int temp,sum;
    sum=0;
    
    if(num>0)
    {
        
        temp = num%10;
        sum = sum*10 + temp;
        
        /* function call itself. */
        cout<<sum;
        reverse(num/10);
        
    }
    
    return 0;
    
    
}

int main()
{
    
    int num,rev;
    
    /* Taking input. */
    
    cout<<"Enter number";
    cin >> num;
    
    /* Called reverse function .*/
    cout<<"reverse of the number is:\n";
    rev = reverse(num);
    
    
    
    return 0;
}





