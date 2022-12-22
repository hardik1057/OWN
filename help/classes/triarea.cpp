#include<iostream>
#include<cmath>
using namespace std;
class rect
{
    public:
        int l1,l2,l3;
        int s=(l1+l2+l3)/3;
        int a=s*((s-l1)*(s-l2)*(s-l3));
        void area()
        {
            cout<< sqrt(a);
        }
};
int main()
{
    rect r1;
    r1.l1=50;
    r1.l2=20;
    r1.l3=30;
    r1.area();
    return 0;
}