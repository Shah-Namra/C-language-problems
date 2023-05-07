#include <iostream>

class box
{
    int len,wid;
public:
    box(int,int);
    void show();
};
box::box(int len, int wid)
{
    this->len=len;
    this->wid=wid;

}

void box::show()
{
    std::cout<<"\n\n Length= " <<len;

    std::cout<<"\n\n Width= " <<wid;

    std::cout<<"\n\n        THIS    = " <<this;
}
int main()
{
    box b1(10,20);
    box b2(30,250);
    box b3(100,200);

    b1.show();
    b2.show();
    b3.show();
}
