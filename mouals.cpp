#include<iostream>
using namespace std;
main()
{
cout<<"Enter the four digit number =";
int number;
cin>>number;
int d1;
d1=number%10;
number=number/10;
int d2;
d2=number%10;
number=number/10;
int d3;
d3=number%10;
number=number/10;
int d4;
d4=number%10;
int sum;
sum=d1+d2+d3+d4;
cout<<"Sum of indivisual digits ="<< sum;
}
