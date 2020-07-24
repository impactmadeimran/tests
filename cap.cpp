#include <iostream>
using namespace std;

class car{
    public:
    string name;
    string model;
    int price;

    car(string x, string y, int z){
        name=x;
        model=y;
        price=z;
    }
};

int main()
{
    car obj("honda","civic",9000);
    car obj2("lamborghini","aventador",999999);

    cout<<obj.name<<" "<<obj.model<<" "<<obj.price<<"\n";
}