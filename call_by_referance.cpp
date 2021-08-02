#include<iostream>
using namespace std;
void fetch(int&p,int&q)
{
    int t;
    t=p;
    p=q;
    q=t;
}
int main()
{
    int i=10,j=20;
    cout << "after swapping i=" << i<<"j ="<<j;
    fetch(i,j);
    cout<<"\nafter swapping i="<<i<<"j="<<j;
    return 0;
}
