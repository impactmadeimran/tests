#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int rand_hundred(){
return 1+(rand() % 100);
}
    
    int number;

int main()
{
    srand(time(NULL));

    for(int i = 0;i < 1;++i){
    cout<<rand_hundred()<<"\n";
    }

    cout<<"Guess the number! ";
    cin>>number;
    
        if(number > rand_hundred())
            cout<<"wrong and higher number"<<endl;
        
        if(number < rand_hundred() )
            cout<<"wrong and low number"<<endl;
        
        if (number == rand_hundred())
            cout<<"correct number"<<endl;
        
        else{
            cout<<"Error!"<<endl;
        }
        
}

