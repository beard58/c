#include<iostream>
using namespace std;


int main()
{
int i=10;
int &j=i;
cout << "i"<<i<<"\tj"<<j;
j++;
cout<<"\ni ="<<i<<"\nj ="<<j;
    return 0;
}
