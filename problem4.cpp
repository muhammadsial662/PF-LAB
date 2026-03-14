#include <iostream>
using namespace std;
main()
{
    cout<<"Enter the red roses :";
    int roses;
    cin>>roses;
    cout<<"Enter the white roses :";
    int whiterose;
    cin>>whiterose;
    cout<<"enter the tulips :";
    int tulips;
    cin>>tulips;
    float total;
    total=roses*2+whiterose*4.10+tulips*2.50;
    float discount;
    float afterdiscount;
    if (total > 200){
     discount=total*20/100.0;
     afterdiscount=total-discount;
     cout<<"Original price ="<<total<<endl;
     cout<<"your price after discount ="<<afterdiscount;
    }
    else {
        cout<<"total price is "<<total;
    }

    
}