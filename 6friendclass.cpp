#include <iostream>
using namespace std;

class dog
{
    private:
        string name;
        string breed;
    protected:
        int age;
    public:
        dog()
        {
            name = "Kutta";
            breed = "Labra";
            age = 4;
        }
        friend class details;        
};

class details
{
    public:
        void display(dog &obj)
        {
            cout << "Breed is, " << obj.breed << ". Name is, " << obj.name << ". Age is, " << obj.age;
        }
};

int main()
{
    dog d;
    details f;
    f.display(d);
    return 0;
}
