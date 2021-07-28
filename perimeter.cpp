#include<iostream>
using namespace std;
int main(){
int l,b,a,p;
std::cout << "enter the length" << std::endl;
std::cin >> l;
std::cout << "enter the breadth" << std::endl;
std::cin >> b;
a=l*b;
p=l+b;
if(a>b)
cout<<"the area is greater";
else
cout<<"the perimeter is greater";
}