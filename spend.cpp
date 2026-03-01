#include<iostream>
using namespace std;
main()
{
cout<<"Enter your age =";
float age;
cin>>age;
cout<<"Enter number of time you moved =";
int move;
cin>>move;
float ave;
ave=age/(move+1);
cout<<"you spend "<<ave<<"years";
}