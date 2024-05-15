#include<iostream>

using namespace std;

int TestReturn(int &x, int &y)
{
    x = 10;
    y = 20;
    return x * y;
}

int main()
{
    int a = 4
    int b = 2
    cout << b << " " << a << endl;
    TestReturn(a,b);
    cout << b << " " << a << endl;
}
