#include <iostream>
using namespace std;

float sp(float a) 
{
    float area;
    area = a*a;
    return area;
}
float rectangle(float l,float b )
{
    float area;
    area = l*b;
    return area;
}
float circle(float r)
{
    float area;
    area=2*3.14*r;
    return area;
}
float sphare(float r)
{
    float area;
    area=4*3.14*r*r;
    return area;
}
main()
{
  
    float b,p,t,h;
    int ch;
    cout << "press 1 for calculate the area of the circle "<<endl<<"press 2 for calculate the area of the square "<<endl<<"press 3 for calculate the area of the rectangle "<<endl<<"press 4 for calculate the area of the sphare "<<endl<<"press 4 for calculate the area of rectangle";
    cin>>ch;
    if(ch==1)
    {
        cout <<"enter the radius of the circle"<<endl;
        cin>>b;
        cout<<endl<<circle(b);
    } 
    else if (ch==2)
    {
        cout<<"enter the side of the square : ";
        cin>>p;
        cout<<endl<<sp(p);
    }
    else if (ch==3)
    {
        cout<<"enter the length and bridth of the rectangle : ";
        cin>>t>>h;
        cout<<endl<<rectangle(t,h);
    }
    else if (ch==4)
    {
        cout<<"enter the radius of the sphare : ";
        cin>>b;
        cout<<endl<<sphare(b);
    }
    return 0;
}


