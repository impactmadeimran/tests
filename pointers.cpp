#include <iostream>
using namespace std;
int main()
{
    string food = "pizza";
    string *p = &food;

    cout<<*p<<"\n"; // outputs pizza or dereferencing
    cout<<p<<"\n";// outputs the memory location of food
    cout<<food<<"\n";// outputs pizzza


        //pointer modification

            *p = "kenkey";// changes food from pizza to kenkey
            cout<<*p<<"\n";//outputs kenkey
            cout<<food<<"\n";//outputs kenkey
    


}