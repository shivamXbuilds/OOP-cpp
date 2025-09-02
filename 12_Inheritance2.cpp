#include <iostream>
using namespace std;

class games_completed
{
    public:
        string name1;
        int time_taken;
        games_completed(string x, int y);
};

games_completed :: games_completed(string x, int y)
{
    name1 = x;
    time_taken = y;
}

class games_playing
{
    public:
        string name2;
        int percentage_completed;
        games_playing(string x, int y);
};

games_playing :: games_playing(string x, int y)
{
    name2 = x;
    percentage_completed = y;
}

class games_library : public games_completed, public games_playing //**MULTIPLELEVEL**
{
    public:
        games_library(string a, string b, int c, int d);
        void display()
        {
            cout << "games :...................\n" << name1 <<endl;
            cout << name2 << endl;
            cout << "Total time invested on completed game in hours : " << time_taken << endl;
            cout << "Percentage completed of games playing : " << percentage_completed << "%" << endl;
        }
};

class gaming_experience : public games_library //**MULTILEVEL**
{
    public:
        int rating;
        gaming_experience(string a, string b, int c, int d, int r); 
        void display()
        {
            cout << "Time Invested in hours: " << time_taken << ", Rating given by gamer : " << rating << " Out of 10" << endl;
        }
};

gaming_experience :: gaming_experience(string a, string b, int c, int d, int r) 
    : games_library :: games_library(a,b,c,d) , rating(r)
{}  

games_library :: games_library(string a, string b, int c, int d) : games_completed :: games_completed(a,c), games_playing :: games_playing(b,d) {}



int main()
{

    games_library G1("Far Cry 3", "Balatro", 12, 78);
    games_library G2("COD MW1", "Forza Motorsport", 20, 43);
    games_library G3("COD MW2", "Cuphead", 25, 22);
    games_library G4("COD MW3", "Hollow Knight", 18, 54);
    games_library G5("Sakuna", "Ori And The Blind Forest", 102, 86);

    gaming_experience E1("Far Cry 3", "Balatro", 12, 78 , 8);
    gaming_experience E2("COD MW1", "Forza Motorsport", 20, 43, 10);

    G1.display();
    G2.display();
    G3.display();
    G4.display();
    G5.display();

    E1.display();
    E2.display();
    
    return 0;
}
