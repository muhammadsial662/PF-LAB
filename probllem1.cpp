#include<iostream>
using namespace std;
main()
{
    cout<<"enter country name:";
    string name;
    cin>>name;
    cout<<"enter ticket price";
    int price;
    cin>>price;
    float discount;
    float final;
    if (name=="Ireland"){
        discount=price*10/100.0;
        final=price-discount;
        cout<<"After discount your price :"<<final<<"dollars";
}
else if (name!="Ireland"){
    discount=price*5/100.0;
    final=price-discount;
    cout<<"your price after discount"<<final<<"dollars";
}
}