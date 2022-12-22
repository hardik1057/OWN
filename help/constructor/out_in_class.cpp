#include<iostream>
using namespace std;
class A
{
    public :
    int x;
        void gwt()
        {
            cout <<x ;
        }
    // inside the classs constructor
    // A()
    // {
    //     x=10;
    // }
    // ~A()
    // {

    // }
    A();
};
// outidide the class constructor 
A::A()
{
    x=120;
}
int main ()
{
    A a;
    a.gwt();
}
