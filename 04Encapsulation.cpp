#include <iostream>
using namespace std;

class dog
{
    private:
        string breed;
        string name;
        int age;
        int kids;
    public:
        dog(string x, string y, int z);
        dog(string a, int b);
};
dog::dog(string x,string y,int z)
{
    breed = x;
    name = y;
    age = z;
    cout << "Breed is: " << breed << ", Name is: " << name << ", Age is: " << age <<endl;
}
dog::dog(string a, int b)
{
    name = a;
    kids = b;
    cout << "Name is : " << name << ", Number of kids are: " << kids <<endl;
}

int main()
{
    dog("Labra","Kutta",4);
    dog("Kutta", 2);
    dog("German","Doggesh",2);
    dog("Doggesh", 4);

    return 0;
}
