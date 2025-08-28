
#include <iostream>
using namespace std;

class dog
{
  public:
    string breed;
    string name;
    int age;
    dog(string x, string y, int z);
};

dog::dog(string x, string y, int z)
{
    breed = x;
    name = y;
    age = z;
    cout << breed << ", " << name << ", " << age << endl;
}

int main() {
    dog mydog("Labra","Kutta",2);
    dog mydog2("German","Doggesh",3);
    return 0;
}
