#include <iostream>
using namespace std;
class integer
{
   int m ,n;
 public:
   integer (int x , int y);
};
integer :: integer (int x , int y )
{
    m=x; n = y;
    cout<<x<<endl<<y<<endl;
}
int main()
{
    integer int1 = integer( 0 , 100); //  Explicit Call
    integer int2(1,100); // implicit call

}
