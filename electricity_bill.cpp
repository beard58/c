#include<iostream>
using namespace std;
class electricity_bill
{
    public:
char n[10];
int u;
void getdata()
{
    cout<<"\nenter the user name: " ;
    cin>>n;
    cout<<"\nenter the unit used: " ;
    cin>>u;
    
}
void showdata()
{
    
    cout<<"\nthe user name is: "<<n;
    cout<<"\nthe unit consummeed is: "<<u;
    int t;
    int t1;
    int t2;
    int s;
    int amount;

t=u;
amount=500;



float i=1.50,j=3.00,k=4.25;

    
   
     if(u<30)
    {
        amount=u*i;
        cout<<"\nthe total amount you have to pay is: "<<amount;
    }
    else if(u>=30 && u<300)
    {
        
        amount=u*j;
        cout<<"\nthe total amount you have to pay is: "<<amount;
    }
    else if(u>=300)
    {
        amount=u*k;
        cout<<"\nthe total amount you have to pay is: "<<amount;
        
    }
    
    if(amount>500)
    {
        
    
        s=amount*1.15;
        cout<<"\nafter the supercharge of 15% your amount is: "<<s;

        
    }
}


};
int main()
{

    
  electricity_bill e;
    e.getdata();
    e.showdata();
    
    
    
}
