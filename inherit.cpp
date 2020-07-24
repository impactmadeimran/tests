#include <iostream>
using namespace std;

class animal{
    public:
    void animalsound(){
        cout<<" This is the animals sound \n";
    }
};

class goat : public animal{
    public:
    void animalsound(){
        cout<<" The goat bleets \n";
    }
};

class pig : public animal{
    public:
    void animalsound(){
    cout<<" The pig oinks \n";
    }
};
    int main(){
        animal myanm;
        goat mygoat;
        pig mypig;

            myanm.animalsound();
            mygoat.animalsound();
            mypig.animalsound();
            return 0;

    }