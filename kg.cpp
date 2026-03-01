#include<iostream>
using namespace std;
main()
{
cout<<"Vegitable price per kg =";
float vegitable;
cin>>vegitable;
cout<<"Fruit price per kg =";
float fruit;
cin>>fruit;
cout<<"total kg of vegitables =";
float all;
cin>>all;
cout<<"total of fruits =";
float total;
cin>>total;
float price;
price=(vegitable*all+fruit*total)/1.94;
cout<<"Earning in ruppes =" <<price;
}
