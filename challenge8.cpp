#include <iostream>
using namespace std;
main()
{
    cout<<"Enter name of first :";
    string name1;
    cin>>name1;
    cout<<"Enter name of secound :";
    string name2;
    cin>>name2;
    cout<<"enter name of third :";
    string name3;
    cin>>name3;
    cout<<"enter age 1 :";
    int age1;
    cin>>age1;
    cout<<"enter age 2 :";
    int age2;
    cin>>age2;
    cout<<"enter age 3 :";
    int age3;
    cin>>age3;
    if (age1 > age2 || age2 < age3){
        cout<<"younger  is"<<name2;
    }
    if (age1 < age2 || age1<age3){
        cout<<"younger is "<<name1;
    }
    if (age3 < age1 || age3 < age2)  {
        cout<<"younger is"<<name3;
}
}
    
        
    



