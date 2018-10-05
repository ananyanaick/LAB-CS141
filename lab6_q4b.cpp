//including the library
#include <iostream>
using namespace std;
//declaration of function
void min(int a,int b,int &c)
{
//assigning a suitable value for variable c
	if(a<b)
		c=a;
	else if(b<a)
		c=b;
}
//main function definition and declaration 
int main()
{	int a,b,c;
	//ask the user to enter the values for the variables
	cout<<"\nEnter the two values to be compared\n”;
	cin>>a>>b;
	//calling the defined function min by reference
	min(a,b,c);
	//checking the equality and then printing the minimum value
	if(c==0)
		cout<<"\nBoth are equal\n";
	else
		cout<<"\nMinimum is "<<c<<endl;
	return 0;
}
