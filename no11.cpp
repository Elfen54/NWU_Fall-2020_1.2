#include <iostream>
using namespace std;
class MyClass
{
public:
    int x;
    void setX(int i)
    {
        x = i;
    }
    int getX()
    {
         return x;
    }
};
int main()
{
    MyClass obs[4];
    int i;
    for(i=0; i < 4; i++)
    obs[i].setX(i);
    for(i=0; i < 4; i++)
    {
        cout << "value of obs[" << i << "]: " << obs[i].getX() << "\n";
    }
return 0;
}

