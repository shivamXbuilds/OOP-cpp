#include<iostream>
#include <string.h>
using namespace std;

class dog
{
    private:
        string name;
        string breed;
        int age;
    public:
        dog(string name,string breed, int age);    
        dog (const dog &obj);
};

dog::dog(string x,string y,int z)
{
    name = y;
    breed = x;
    age = z;
    cout << "Breed is, " << breed << "Name is, " << name << "Age is, " << age << endl;
}

dog::dog(const dog &obj)
{
    name = obj.name;
    breed = obj.breed;
    age = obj.age;
    cout << "Breed is, " << breed << "Name is, " << name << "Age is, " << age << endl;
}

int main()
{
    dog d1("Labra","Kutta",4);
    dog d2(d1);
    return 0;
}
