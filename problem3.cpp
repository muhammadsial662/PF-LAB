#include <iostream>
using namespace std; 
main()
{
    cout<<"Enter the temperature of first city :";
    int tem1;
    cin>>tem1;
    cout<<"Enter the temperature of sec city :";
    int tem2;
    cin>>tem2;
    int difference;
    difference=tem1-tem2;
    if(difference > 10){
        cout<<"Difference is too big";

    }
    else if(difference < 10){
        cout<<"it is good";
    }
    
}