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

        friend void friendfunction(dog &obj);
};

void friendfunction(dog &obj)
{
    cout << "Breed is, " << obj.breed << ". Name is, " << obj.name << ". Age is, " << obj.age;
}

int main()
{
    dog d1;
    friendfunction(d1);
    return 0;
}
