#include<bits/stdc++.h>
using namespace std;

class Player{
    private:
    string name;
    int xp;
    int health;
    public:

    Player(string name_val="None" , int health_val = 0 , int xp_val = 0);
    //Player(); -> will lead to ambiguity for objects with no parameters
};

Player::Player(string name , int health_val , int xp_val)
    : name{name} , health{health_val} , xp{xp_val}{
        cout<<"Three args constructor called\n";
    };

int main(){
    Player p1("Shikha");
    Player p2;
    Player p3("Salvi",5,3);
    Player p4("Kashish",10);

    return 0;

}

//OUTPUT:
//Three args constructor called
//Three args constructor called
//Three args constructor called
//Three args constructor called
