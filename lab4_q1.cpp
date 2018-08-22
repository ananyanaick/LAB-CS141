#include<iostream> //include the library
using namespace std;
int main() 


{
float km, met, cent ;  // declaration
cout <<"Convert centimeter to meter and kilometer "; //header
cout << " Input the distance in centimeter ";
 //distance in centimeter to be converted 
cin >> cent;
met = (cent/100);
km = (met/1000);
cout << "Distance in meter is "<< met << endl; // converts centimeter to meter
cout << "Distance in kilometer is "<< km << endl ; // converts centimeter to kilometer
return 0;
}
