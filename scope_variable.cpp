#include<iostream>
class A{
   public:
   void show();
};
void A::show()
{
    std::cout << "enter the no" << std::endl;
}
int main()
{
    A obj;
    obj.show();
}
