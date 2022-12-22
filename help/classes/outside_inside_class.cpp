#include<iostream>
using namespace std;
class A
{
    private:
        int a,b;
    public :
        void get()// inside the class 
        {
            cin>>a;
            cin>>b;
        } 
        void print()
        {
            cout <<a <<" "<<b;
        }
        void get_c();
};
void A :: get_c()
{
    cout<<"\nhello";
}
int main()
{
    A obj;
    obj.get();
    obj.print();
    obj.get_c();
    return 0;
}