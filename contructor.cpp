#include<iostream>
using namespace std;
class A{
    public:
    void show();
    A(int a,int b)
    {
        cout << "2 arg CTOR of  A" ;
    }
    A(int a)
    {
        cout << "1 arg CTOR of  A" ;
    }
    A()
    {
         cout << "0 arg CTOR of  A" ;
    }
};
void A::show()
{
    //cout<<"enter the value";
}
int main()
{
   // A obj();
   // A obj(100,100);
    A obj(100);
    obj.show();
}
