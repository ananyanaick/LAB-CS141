//program to calculate the total , average and percentage of 5 subjects
#include<iostream>//include library
using namespace std;
int main(){

float sub1,sub2,sub3,sub4,sub5,total,average,percentage,maxmarks; //declaration
cout<<"Enter marks of subject1";
cin>>sub1; //input marks of subject1
cout<<"Enter marks of subject2";
cin>>sub2;//input marks of subject2
cout<<"Enter marks of subject3";
cin>>sub3; //input marks of subject3
cout<<"Enter marks of subject4";
cin>>sub4;//input marks of subject4
cout<<"Enter marks of subject5";
cin>>sub5;//input marks of subject5
cout<<"Enter the maximum marks for 5 subjects";
cin>>maxmarks; //the maximum possible marks in total
total = (sub1+sub2+sub3+sub4+sub5);// calculation of total marks
average = (sub1+sub2+sub3+sub4+sub5)/5;//calculation of average marks
percentage = 100*(sub1+sub2+sub3+sub4+sub5)/maxmarks;//calculation of percetage
cout<<"total marks obtained"<<total<<endl;
cout<<"average marks obtained"<<average<<endl;
cout<<"percentage of marks"<<percentage<<endl;
return 0;
}

