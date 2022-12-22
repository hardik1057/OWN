#include <iostream>
using namespace std;
float division(float x, float y)
{
    return (x / y);
}
int main()
{
    float i = 50;
    float j = 0;
    float k = 0;
    k = division(i, j);
    cout << k << endl;
    return 0;
}
