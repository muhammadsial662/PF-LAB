#include<iostream>
using namespace std;
main()
{
cout<<"Enter the world population now :";
int p;
cin>>p;
cout<<"Enter the birth per month :";
int b;
cin>>b;
int a;
a=p+(b*30*12);
cout<<"Population after 30 years will : "<<a;
}