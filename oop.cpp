#include <iostream>
using namespace std;

class car{
    public:
   void honk();
};

void car::honk(){
    cout<<"hello world!";
}

int main()
{
    car myobj;
    myobj.honk();
    return 0;
}