#include<iostream>
int a=1000;
class scope
{
    int a;
public:
    scope(int x)
    {
        a=x;
    }
    void show()
    {
        int a=20;
        std::cout<<"\n Class Variable: "<<this->a;
        std::cout<<"\n Local Variable: "<<a;
        std::cout<<"\n Global Variable: "<<::a;

    }
};
int main()
{
    scope s1(10);
    s1.show();
}
