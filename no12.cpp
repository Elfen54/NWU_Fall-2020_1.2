#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n = 0;
    double  s = 0.0, A, i;
    cout<<"Enter number of iteration :";
    cin>>n;

    for (i = 2; i <= n; i++)
    {
        s = s + 1/i;
        s = pow(s,i);
    }
    A = s+1;
    cout<<"Value of 'A' = "<<A;
return 0;
}
