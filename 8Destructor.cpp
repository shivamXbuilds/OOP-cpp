#include <iostream>
using namespace std;
int count = 0;
class test
{
    public:
        test()
        {
            count ++;
            cout << "Constructor is called....."  << count << endl;
        }
        ~test()
        {
            cout <<"Destructor is called....." << count << endl;
            count--;
        }
};

int main()
{
    test t1,t2,t3,t4;
    
    return 0;
}
