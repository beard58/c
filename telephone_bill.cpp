#include<iostream>
using namespace std;
class telephone_bill
{
    public:
  char name[10];
  char address[10];
 long int tel_no;
 long int no_of_calls;
  int c;
 
  void getdata()
  {
    cout<<"\nenter the name";
    cin>>name;
    cout<<"\nenter the address";
    cin>>address;
    cout<<"\nenter the telephone nummber";
    cin>>tel_no;
    cout<<"\nenter no of calls you have done";
    cin>>no_of_calls;
    
    
  }
  void showdata()
  {
       c=no_of_calls*2;
    cout << "\nthe name is "<<name;  
    cout<<"\n the address is "<<address;
    cout<<"\n the telephone nummber is"<<tel_no;
    cout<<"\n no of calls you have done is"<<no_of_calls;
    cout<<"\n your charges is"<<c;
  }
  
 
  
  
};
int main()
{
telephone_bill s;
 

s.getdata();
s.showdata();
return 0;
}

