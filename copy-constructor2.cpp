#include<bits/stdc++.h>
using namespace std;

class Player{
    private:
    string name;
    int health;
    int xp;
    public:

    string get_name(){return name;}
    int get_xp(){return xp;}

    Player(std::string name, int health_val, int xp_val);
    Player(const Player&source);
    ~Player(){cout<<"Destructor called for " <<name<<endl ;};
};

Player::Player(string name="None" , int health_val=0 , int xp_val=0)
                : name{name} , health{health_val} , xp{xp_val}{
                    cout<<"Hello "<<name<<"\n";
                };

Player::Player(const Player&source)
    : name{source.name}, health{source.health} , xp{source.xp}{
        cout<<"Copy constructor called\n";
    }

    void display(Player p)//here a copy is constructed local in the display function so at end of func destructor will be called
    {
        cout<<p.get_name()<<endl;
        cout<<p.get_xp()<<endl;
    }

int main(){
    
    Player p1("shikha" , 3,2);
    Player p2("salvi" , 11);
    Player p3;

    display(p2);

    return 0;

}

Output
Hello shikha
Hello salvi
Hello None
Copy constructor called
salvi
0
Destructor called for salvi
Destructor called for None
Destructor called for salvi
Destructor called for shikha

