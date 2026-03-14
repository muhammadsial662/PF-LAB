#include<iostream>
using namespace std;
main()
{
    cout<<"Enter the number :";
    int number;
    cin>>number;
    int even;
    even=number%2;
    if(even==0){
        cout<<"number is even";
    }
        else{
            cout<<"number is odd";
        }
    }