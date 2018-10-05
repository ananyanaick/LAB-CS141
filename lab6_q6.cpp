#include <iostream>
using namespace std;
//declare and define the function to find the maximum and minimum number 
int findmin(int a,int b)
{	//check for minimum value and assigning it to the return variable
 	int min;
 	if(a<b)
 		min=a;
 	else if(b<a)
 		min=b;
 	// returning the value to main function
 	return min;
}
int findmax(int a,int b)
{	//check for maximum value and assigning it to the return variable
 	int max;
 	if(a>b)
 		max=a;
 	else if(b>a)
 		max=b;
 	// returning the value to main function
 	return max;
}
void sum(int a,int b)
{
	//finding sum of given values
 	int s
	s=a+b;
 	//printing them in the a+b=sum format
 	cout<<a<<"+"<<b<<"="<<s;
 	cout<<endl;
}
int main()
{	int a,b,c,d;
 	// user enters values of the variables 
	cout<<"Enter the two values to be used.\n”;
  	cin>>a>>b;
	cout<<“\specify the action you want to perform with these two values \nEnter value 1 to find sum\nEnter value 2 to find minimum of the numbers \nEnter value 3 to find maximum of the two numbers\n";
	cin>>d;
	if(d==1)
		sum(a,b);
	else if (d==2)
		{
		  c=findmin(a,b);
		 if(c==0)
			cout<<"\n the entered numbers have equal value\n”;
       		 else 
			cout<<"\n The minimum value of the two is: "<<c<<endl;
		}
	else if (d==3)
		{c=findmax(a,b);
	
		 if(c==0)
			cout<<"\n the entered numbers are equal in value“;
        	 else 
			cout<<"\n The Maximum value of the two is "<<c;
		}
	else
		{cout<<"\n Invalid entry:restarting program…”;
		  main();
		}
			

	return 0;
}
