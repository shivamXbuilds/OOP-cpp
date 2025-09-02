#include<iostream>
using namespace std;

class dog
{
    public:
        int age;
        string name;
        string breed;
        dog(int x, string y, string z);
};

dog::dog(int x, string y, string z)
{
    age = x;
    name = y;
    breed = z;
}

class food : public dog
{
    public:
        string fooditem;
        food(int x, string y, string z, string f);
};

food::food(int x, string y, string z, string f) : dog::dog(x,y,z)
{
    fooditem = f;
}

void display(food &obj)
{
    cout << "Name is: " << obj.name << ", Breed is : " << obj.breed << ", Age is : " << obj.age << ", Eating : " << obj.fooditem << "\n";
}

int main()
{
    food mydog1(4, "Kutta", "Labra", "Chicken");
    food mydog2(3, "Doggesh", "German", "Bone");
    display(mydog1);
    display(mydog2);
    return 0;
}
