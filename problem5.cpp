#include <iostream>
using namespace std;
main()
{
    cout<<"enter the number of holidays :";
    int holidays;
    cin>>holidays;
    int year=365;
    int days;
    days=year-holidays;
    int time;
    time=days*63+holidays*127;
    int aftertime;
    aftertime=abs(30000-time);
    int hour;
    hour=aftertime/60;
    if(aftertime <= 30000 && aftertime > 0){
        cout<<"Tom sleep well"<<endl;
        cout<<hour<<"hours";

    }
    else if(aftertime > 30000){
        cout<<"tom run away"<<endl;
        cout<<hour<<"hours";
    }
}