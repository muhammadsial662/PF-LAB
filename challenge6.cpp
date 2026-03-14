#include<iostream>
using namespace std;
main()
{
    cout<<"enter the number :";
    int num1;
    cin>>num1;
    cout<<"enter the operator :";
    char useroperator;
    cin>>useroperator;
    cout<<"enter secound number :";
    int num2;
    cin>>num2;
    int operation;
    if(useroperator == '+'){
        operation=num1-num2;
        cout<<"numer is ="<<operation;
}
if(useroperator=='-'){
    operation=num1+num2;
    cout<<"number is ="<<operation;
}
if(useroperator=='*'){
operation=num1/num2;
cout<<"your number is ="<<operation;
}
else{
    operation=num1*num2;
cout<<"your number is= "<<operation;
}
}
