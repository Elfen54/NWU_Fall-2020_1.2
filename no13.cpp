#include<iostream>
#include<cmath>
#include<cstring>
#define PI 3.1416
using namespace std;

class Circle
{
public:
    float radius, area;
    void s_cal(void)
    {
        cout << "Enter the radius of circle : ";
        cin >> radius;
        area = PI * radius * radius;
        cout << "\nArea of circle with radius "<< radius << " is " << area<<endl;
    }
};

class Trapezium
{
public:
    float a,b,h;
    double area;
    void trapezium_cal (void)
    {
    cout<<"\nEnter side1 of Trapezium : ";
    cin>>a;
    cout<<"Enter side2 of Trapezium : ";
    cin>>b;
    cout<<"Enter height of Trapezium : ";
    cin>>h;
    area = (.5*(a+b))*h;
    cout<<"\nArea of Trapezium is : "<<area<<endl;
    }
};

class Square
{
public:
    float s, area;
    void sq_cal (void)
    {
        cout<<"\nEnter side of Square : ";
        cin>>s;
        area = s*s;
        cout<<"\nArea of Square is : "<<area<<endl;
    }
};
class Rhombus
{
public:
    int p,q,A;
    Rhombus_cal()
    {
        cout<<"Enter 1st Diagonal value : ";
        cin>>p;
        cout<<"Enter 2nd Diagonal value : ";
        cin>>q;
        A = (p*q)/2;
        cout<<"Area on Rhombus is : "<<A<<endl;
    }
};
int main()
{
    Circle C;
    Trapezium Tr;
    Square S;
    Rhombus R;
    char a;
    cout<<"   AREA\t\t\t Input\n";
    cout<<" Trapezium\t\t   T\n";
    cout<<" Circle\t\t\t   C\n";
    cout<<" Square\t\t\t   S\n";
    cout<<" Rhombus\t\t   R\n\n";
    cout<<"Enter your choice : ";
    cin>>a;

    if(a=='T')
    {
        Tr.trapezium_cal();
    }

    else if(a=='C')
    {
        C.s_cal();
    }

    else if(a=='S')
    {
        S.sq_cal();
    }

    else if(a=='R')
    {
        R.Rhombus_cal();
    }
    else
    {
        cout<<endl<<"Wrong Input"<<endl;
    }
return 0;
}
