#include <iostream>

int main()
{
    float dollar= 5.73;
    float pound = 7.10;
    float euro  = 6.43;
    float yuan  = 0.81;
    float cedis;
    float amount;
    int   enter;

    std::cout<< "Select Currency To Convert To Cedis \n";
    std::cout<< "1. US Dollar \n";
    std::cout<< "2. Pound \n";
    std::cout<< "3. Euro \n";
    std::cout<< "4. Chinese Yuan \n";
    std::cin>> enter;

switch(enter)
    {
    case 1:
        std::cout<< "Amount To Convert: ";
        std::cin>>amount;
        cedis = amount * dollar;
        std::cout<<cedis<<" "<<"cedis";
        break;
    case 2:
        std::cout<<"Amount To Convert: ";
        std::cin>>amount;
        cedis = amount * pound;
        std::cout<<cedis<<" "<<"cedis";
        break;
    case 3:
        std::cout<<"Amount To Convert: ";
        std::cin>>amount;
        cedis = amount * euro;
        std::cout<<cedis<<" "<<"cedis";
        break;
    case 4:
        std::cout<<"Amount To Convert: ";
        std::cin>>amount;
        cedis = amount * yuan;
        std::cout<<cedis<<" "<<"cedis";
        break;
        }

}