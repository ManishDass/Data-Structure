#include <bits/stdc++.h>
using namespace std;

class test
{
private:
    int x, y;

public:
    test()
    {
        x = y = 0;
    }
    test(int a, int b)
    {
        x = a;
        y = b;
    }
    void input(int a, int b)
    {
        x = a;
        y = b;
    }
    void output()
    {
        cout << "Sum=" << (x + y);
    }
};
int main()
{
    test t1;         // default constructor
    test t2(10, 20); // parameterized constructor
    test t3;
    int s;
    t3.input(50, 60); // member function call

    t1.output();
    t2.output();
    t3.output();

    return 0;
}