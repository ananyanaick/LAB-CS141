//including the library
#include <iostream>
using namespace std;
//declaring and defining function for finding maximum
int min(int a,int b)
{	//check for minimum value to assign it to the return variable
 	int m;
 	if(a<b)
 		m=a;
 	else if(b<a)
 		m=b;
 	// return the value to main
 	return m;
}
int main()
{	int a,b,c;
 	//the user enters values of the variables
	cout<<“\nEnter the two values to be compared\n”;
  	cin>>a>>b;
        //call the function to assign its return value to another variable
	c=min(a,b);
	
	if(c==0)
		cout<<"\n the numbers entered are equal\n";
        else 
		cout<<"\nMinimum number of the two is : ”<<c<<endl;
	return 0;
}
