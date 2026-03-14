#include <iostream>
using namespace std;
main()
{
    cout<<"enter the shape :";
    string shape;
    cin>>shape;
    float area;
    float length;
    float width;
    int side;
    if (shape=="square"){
        cout<<"enter lenght of its side :"<<endl;
        cin>>side;
        area=side*side;
        cout<<"area of square ="<<area;
}
    else if (shape=="rectangle"){
        cout<<"enter the lenght :";
        cin>>length;
        cout<<"enter width :";
        cin>>width;
        area=length*width;
        cout<<"area of rectangle ="<<area;
    }
    else if(shape=="circle"){
        cout<<"enter the radius of circle :";
        int radius;
        cin>>radius;
        area=3.14*(radius*radius);
        cout<<"area of the circle is ="<<area;
    }
    else if(shape=="triangle"){
        cout<<"enter the base :";
        float base;
        cin>>base;
        cout<<"enter the height :";
        float hight;
        cin>>hight;
        area=0.5*(base*hight);
        cout<<"area of the circle is ="<<area;
    }
    else {
        cout<<"shape is invalid";
    }
}