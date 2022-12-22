#include<iostream>
using namespace std;
class rect
{
    public:
        int l, b;
        void area()
        {
            cout<< l*b;
        }
};
int main()
{
    rect r1;
    r1.l=10;
    r1.b=20;
    r1.area();
    return 0;
}