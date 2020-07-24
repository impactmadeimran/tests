#include <iostream>

int p, r, n, t;

int main()
{
    std::cout << "Enter Initial Balance: " << std::endl;
    std::cin >> p;

    std::cout << "Enter Interest Rate: " << std::endl;
    std::cin >> r;

    std::cout << "Enter Number of Times Interest Applied per Time Period: " << std::endl;
    std::cin >> n;

    std::cout << "Enter Number of Time Periods Elapsed: " << std::endl;
    std::cin >> t;
    
    int final_amount = p*(1+(r/n)^(n*t)) ;
    std::cout << "The Compound Interest is: " << final_amount;
}