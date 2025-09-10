// friend class type shi
#include <iostream>
using namespace std;

class music_artists
{
    private:
        string name;
    protected:
        int rating;
    public:    
    music_artists(string x, int y)
    {
        name = x;
        rating = y;
    }
    friend class details;
    ~music_artists()
    {
        cout << "Destructor called for...." << name << endl;
    }
};

class details
{
    public:
        void display(music_artists &obj)
        {
            cout << "Name is..." << obj.name << "\nRating is..." << obj.rating << endl;
        }
};

int main() {
    music_artists m1("Playboi Carti", 4);
    music_artists m2("Radiohead", 5);
    details d;
    d.display(m1);
    d.display(m2);
    music_artists m3(m2);
    d.display(m3); // copy constructor 
    return 0;
}
