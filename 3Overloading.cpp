
#include <iostream>
using namespace std;

class dog
{
  public:
    string breed;
    string name;
    int age;
    int kids;
    dog(string x, string y, int z);
    dog(string a, int b);
};

dog::dog(string x, string y, int z)
{
    breed = x;
    name = y;
    age = z;
    cout << breed << ", " << name << ", " << age << endl;
}

dog::dog(string a, int b)
{
    name = a;
    kids = b;
    cout << name << " has " << kids << " kids" << endl;
}

int main() {
    dog mydog("Labra","Kutta",2);
    dog dog1("Kutta",4);
    dog mydog2("German","Doggesh",3);
    dog dog2("Doggesh", 2);
    return 0;
}
