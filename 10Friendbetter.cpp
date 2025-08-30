#include <iostream>
using namespace std;

class fc
{
    private:
        string name;
        string position;
        int loss;
        int win;
    public:
        fc(string a, string b, int c, int d);   
        
        friend class details;
        friend void function(fc & fc1); 
};

fc::fc(string a, string b, int c, int d)
{
    name = a;
    position = b;
    loss = c;
    win = d;
}
void function(fc &fc1)
{
    cout << "Name of club : " << fc1.name << " Position of club : " << fc1.position << " Number of losses : " << fc1.loss << " Number of wins : " << fc1.win << endl ;
}

class details
{
    public:
        void display(fc &fc1)
        {
            cout << "Name of club : " << fc1.name << " Position of club : " << fc1.position << " Number of losses : " << fc1.loss << " Number of wins : " << fc1.win << endl ;
        }
};

int main()
{
    fc fc1("Barcelona" , "Second" , 18, 5);
    fc fc2("Dortmund" , "First" , 19, 4);
    fc fc3("Madrid" , "Third" , 17, 6);
    fc fc4("Arsenal" , "Second" , 16, 6);
    cout << "Using friend function : " << endl;
    function(fc1);
    function(fc2);
    function(fc3);
    function(fc4);
    cout << "Using friend class : " <<endl;
    details d;
    d.display(fc1);
    d.display(fc2);
    d.display(fc3);
    d.display(fc4);

    return 0;
}
