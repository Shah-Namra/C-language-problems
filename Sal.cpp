#include  <iostream>
int main()
{
    float sal, tax, nsa;

    std::cout<< "Enter your salary: ";
    std::cin >> sal;

    tax = sal*0.1;
    nsa = sal - tax;

    std::cout << "\nYour salary = "<< sal;

    std::cout << "\nYour Tax = "<< tax;

    std::cout << "\nYour net salary = "<< nsa;
    std::cout << "\n-----------------------";
    return 0;
}
