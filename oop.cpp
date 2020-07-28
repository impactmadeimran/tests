#include <iostream>
using namespace std;

struct animals{
   string name;
    int age;
    string breed;
};
int main()
{
    animals type;
    type.age = 2;

    cout<<type.age;
}