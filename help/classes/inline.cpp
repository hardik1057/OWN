#include<iostream>
using namespace std;
int a = 10, b = 90;
class A
{
    public:
        void add(int a, int b);
};
inline void A::add(int a , int b)
{
    cout<<a+b;
}
int main()
{
  A qw;
  qw.add(a, b);
  return 0;
}   