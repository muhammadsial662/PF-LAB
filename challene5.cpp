#include<iostream>
using namespace std;
main()
{
    cout<<"Enter your ammount :";
    int amount;
    cin>>amount;
    int discount;
    int afterdiscount;
    if(amount <= 5000){
        discount=amount*5/100.0;
        afterdiscount=amount-discount;
        cout<<"your amount after discount :"<<afterdiscount;

    }
    else{
        discount=amount*10/100.0;
        afterdiscount=amount-discount;
        cout<<"your amount after discount is:"<<afterdiscount;
    }
}