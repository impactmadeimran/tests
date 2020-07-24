#include <iostream>
using namespace std;
void loadgame()
{
    cout<<"welcome! Lets get started. \n";
};
void resume_game()
{
    cout<<"Welcome back. \n";
};
void change_player()
{
    cout<<"Select a new player. \n";
};

int main()
{
    cout<<" 1. Loadgame \n";
    cout<<" 2. Resume game \n";
    cout<<" 3. Change player \n";
    cout<<" 4. Exit \n";

    int select;
    cin>>select;

    switch(select){
    
    case 1:
        loadgame();
    break;
    
    case 2:
        resume_game();
    break;
    
    case 3:
        change_player();
    break;

    default:
        cout<<"Hope you enjoyed";
        break;






    }



}