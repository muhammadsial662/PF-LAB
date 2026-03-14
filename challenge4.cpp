#include<iostream>
using namespace std;
main()
{
    cout<<"enter password :";
    string user_enter;
    cin>>user_enter;
    string password;
    password="ali7798";
    if(user_enter==password){
        cout<<"you broke";
}
else{
    cout<<"not easy";
}
}