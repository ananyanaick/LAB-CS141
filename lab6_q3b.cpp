//including library 
#include <iostream>
using namespace std;
//declaring and defining of the function
void max(int a,int b,int &c)
{
//putting value for c appropriately 	
	if(a>b)
		c=a;
	else if(b>a)
		c=b;
}
//main function
int main()
{	int a,b,c;
	//user enter values for the variables to be compared
	cout<<"\nEnter the two numbers that are to be compared\n”;
	cin>>a>>b;
	//calling the function
	max(a,b,c);
	//checking for equality and then printing the maximum of the two
	if(c==0)
		cout<<"\nBoth entered numbers are equal";
	else
		cout<<"\nMaximum number of the two given is: "<<c;
	return 0;
}
