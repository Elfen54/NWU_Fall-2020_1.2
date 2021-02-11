#include <iostream>
#include <cmath>
#include <conio.h>
#include <iomanip>
using namespace std;
int main()
{
    string RAFI_1[10];
    int RAFI_2[10], RAFI_3[10], RAFI_4[10];
    float RAFI_5;
    int RAFI_6=0, RAFI_7=0;
    float RAFI_AVERAGE=0;
    cout<<"Enter values: \n";
    for(int i=0; i<3; i++)
    {
        cin>>RAFI_1[i]>>RAFI_2[i]>>RAFI_3[i]>>RAFI_4[i];
        cout<<endl;
    }
    cout<<"Player Name"<<setw(15)<<"Runs"<<setw(15)<<"Innings"<<setw(20)<<"Time not out"<<endl;
    for(int i=0; i<3;i++)
    {
        cout<<RAFI_1[i]<<setw(22)<<RAFI_2[i]<<setw(15)<<RAFI_3[i]<<setw(20)<<RAFI_4[i]<<endl;
    }
    for(int i=0; i<3;i++)
    {
        RAFI_6 = RAFI_6+RAFI_2[i];
        RAFI_7 = RAFI_7+RAFI_3[i];
    }
    RAFI_AVERAGE = RAFI_6/RAFI_7;
    cout<<"\nAverage runs : "<<RAFI_AVERAGE<<endl;
return 0;
}
