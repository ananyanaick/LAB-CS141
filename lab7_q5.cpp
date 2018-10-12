#include <iostream>


int sumOfEvenOdd(int , int );


int main()
{
    int start, end, sum;
    
    /* Input lower and upper limit from user */
    std::cout<<"Enter lower limit: ";
    std::cin>>start;
    std::cout<<"Enter upper limit: ";
    std::cin>>end;
    
    std::cout<<"Sum of even/odd numbers :"<<sumOfEvenOdd(start, end);
    
    return 0;
}



/**
 * Function to find sum of all even or odd numbers recursively.
 */
int sumOfEvenOdd(int start, int end)
{
    /* condition */
    if(start > end)
        return 0;
    else
        return (start + sumOfEvenOdd(start + 2, end));
}

