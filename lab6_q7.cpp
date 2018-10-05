//including lib
#include<iostream>
using namespace std;
//function to change into upper case
char toUpper(char b)
{	char s;int a;
 	a=b;
	a=a-32;
	s=a;
	return s;
}
//function to change into lower case
char toLower(char b)
{	char s;int a;
 	a=b;
	a=a+32;
	s=a;
	return s;
}	
int main()
{	char b,t;
	cout<<"\n Enter the alphabet to be operated on upper or lower case :";
	cin>>b;
	if(b>='A' && b<='Z')
	{
		t=toLower(b);
		cout<<"\nthe lower case of the entered alphabet is "<<t;
	}
	else if(b>='a' &&b<='z')
	{	
		t=toUpper(b);
		cout<<"\nthe upper case of the entered alphabet is "<<t;
	}
	else 
	cout<<"\n  The character entered is not an alphabet ";
        
	return 0;
}
