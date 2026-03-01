#include<iostream>
using namespace std;
main()
{
cout<<"Enter Matric Numbers :"<<endl;
int matric;
cin>>matric;
cout<<"Enter Inter Numbers :"<<endl;
int inter;
cin>>inter;
cout<<"Enter ECAT Marks :"<<endl;
int ECAT;
cin>>ECAT;
float Aggrigate;
Aggrigate= (matric*10)/1100+(inter*40)/1200+(ECAT*50)/400;
cout<<"YOUR AGGRIGATE IS :"<<Aggrigate<<"%";
}
