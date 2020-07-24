#include <iostream>
using namespace std;

class bikes{
    public:
    string name;
    int horse_p;
    int price;
};

int main(){
    bikes type;
    type.name = "Yamaha";
    type.horse_p = 70;
    type.price = 700;

    bikes type2;
    type2.name = "Ducati";
    type2.horse_p = 650;
    type2.price = 2500;

    cout<<type.name<<" "<<type.horse_p<<" horse power and price is "<<type.price<<" cedis.\n";
    cout<<type2.name<<" "<<type2.horse_p<<" horse power and price is "<<type2.price<<" cedis\n";





}