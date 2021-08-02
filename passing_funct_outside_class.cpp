#include<iostream>
using namespace std;
class A{
    public:
    void show()
    {
        
        std::cout << "\nshow of A" << std::endl;
    }
};
void anyMethod(A pa)
{
    pa.show();
}
int main()
{
   
    A a;
    anyMethod(a);
    return 0;
}
