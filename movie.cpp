#include<iostream>
using namespace std;
main()
{
cout<<"Enter the name of the movie =";
string m;
cin>>m;
cout<<"Enter the price of adult ticket =$";
int p;
cin>>p;
cout<<"Enter the price of child ticket =$";
int c;
cin>>c;
cout<<"Number of adult ticket sold =";
int s;
cin>>s;
cout<<"Number of children ticket sold =";
float i;
cin>>i;
cout<<"Percentage of total money to donate to charity =";
float charity;
cin>>charity;
int l;
l=p*s;
int b;
b=c*i;
int total;
total=l+b;
float donation;
donation=total*(charity/100.0);
float remaining;
remaining=total-donation;
cout<<"--------------------\n"<<endl;
cout<<"Movie :"<<m<<endl;
cout<<"Total money earned =$"<<total<<endl;
cout<<"Donation amount =$"<<donation<<endl;
cout<<"Remaining amount =$"<<remaining;
}
