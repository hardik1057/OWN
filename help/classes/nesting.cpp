#include <iostream>
using namespace std;
class A // class definition
{
private:
    int a;
    int b;
    void set_a(int a) // set value of a
    {
        this->a = a;
    }
    void set_b(int b) // set value of b
    {
        this->b = b;
    }
public:
    void getValues(int x, int y)
    {
        set_a(x); // calling private member function
        set_b(y); // calling private member function
    }
    void putValues()
    {
        cout << "a=" << a << ",b=" << b << endl; // printing values of private data members a,b
    }
};
int main()
{
    A objA;
    objA.getValues(100, 200);
    objA.putValues();
    return 0;
}
