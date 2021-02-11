#include <iostream>
#include <cmath>
using namespace std;

class bank
{
public:
    string Name_of_the_depositor;
    long int Account_number;
    string Type_of_account;
    int Balance_in_the_account;
    int x,y,n;
    float A;
    assign_values()
    {
        cout<<"Enter name : "; cin>>Name_of_the_depositor;
        cout<<"Account Number : "; cin>>Account_number;
        cout<<"Account Type : "; cin>>Type_of_account;
        cout<<"Account Balance : "; cin>>Balance_in_the_account;
    }
    amount_after_n_years()
    {
        cout<<"\nEnter time in years : " ; cin>>n;
        cout<<"\nInterest rate is 5.5%";
        cout<<"\nTime T is 5";
        x = Balance_in_the_account * ( 1+ (5.5/n));
        y = n*5;
        A = pow(x,y);
        cout<<"\nInterest after "<<n<<" years is : "<<A;
    }
    display()
    {
        cout<<"\n\nName : "<<Name_of_the_depositor<<"\nBalance : "<<Balance_in_the_account;
    }
};
int main()
{
    bank obj;
    obj.assign_values();
    obj.amount_after_n_years();
    obj.display();
return 0;
}
