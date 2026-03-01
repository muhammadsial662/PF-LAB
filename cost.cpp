#include<iostream>
using namespace std;
main()
{
cout<<"Enter the weight of the bag =";
float w;
cin>>w;
cout<<"Enter the cost of the bag =";
float c;
cin>>c;
cout<<"Ente the size area the bag can cover =";
float a;
cin>>a;
float q;
q=c/w;
float m;
m=c/a;
cout<<"Price for each pound is = $"<<q<<endl;
cout<<"Cost for each square foot is = $"<<m;
}