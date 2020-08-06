#include <iostream>
using namespace std;

class animal{
    public:
    void animalsound(){
        cout<<"This is the sound an animal makes. \n";
    }
};

class dog : public animal {
    public:
    void animalsound(){
        cout<<"The dog barks. \n";
    }   
};

class pig : public animal {
    public:
    void animalsound(){
        cout<<"The pig oinks. \n";
    }
};

int main()
{
    animal myanm;
    dog mydog;
    pig mypig;
    myanm.animalsound();
    mydog.animalsound();
    mypig.animalsound();
}