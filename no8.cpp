#include <iostream>
using namespace std;
class base
{
public:
    int a;
};

class base2
{
public:
    int a2;
};

class derived : public base, public base2
{
public:
    int b, c, c2;
    int dc=10, dc2=100;
    sum(){
        a=10, b=20;
        c = a+b;
        cout<<"From single inheritance :"<<c<<endl;
    }
    sum2(){
        a2=200, b=20;
        c2 = a2+b;
        cout<<"\nFrom multiple inheritance : "<<c2<<endl;
    }
};
class derived2 : public derived
{
public:
    sum3()
    {
        int p = dc+dc2;
        cout<<"\nFrom multilevel inheritance : "<<p<<endl;
    }
};
int main(){
    derived obj;
    derived2 obj2;
    obj.sum();
    obj.sum2();
    obj2.sum3();
return 0;
}
