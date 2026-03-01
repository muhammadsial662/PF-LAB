#include<iostream>
using namespace std;
main()
{
cout<<"Enter player = ";
float p;
cin>>p;
cout<<"Enter imposter =";
float i;
cin>>i;
float c;
c=(100*i)/p;
cout<<"Chance of imposter is = "<<c<<"%";
}