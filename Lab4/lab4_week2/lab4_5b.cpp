#include <iostream>
using namespace std;
void fn1();
void fn2();
void fn3();
int fn4();
int main()
{
    fn1();
    fn2();
    fn3();
    cout << "sum = " << fn4() << endl;
    return (0);
}

void fn1()
{
    int digit;
    for (digit = 0; digit <= 9; ++digit)
    {
        cout << digit << " ";
    }
    cout << endl;
    for (digit = 0; digit <= 9; digit++)
    {
        cout << digit << " ";
    }
    cout << endl;
}

void fn2()
{
    int n;
    for (n = 0; n <= 20; n++)
    {
        cout << n << " ";
    }
    cout << endl;
}
void fn3()
{
    for (int n = 10; n >= 1; n--)
    {
        cout << n << " ";
    }
    cout << endl;
}
int fn4()
{
    int sum;
    for (int n = 10; n >= 1; n--)
    {
        cout << n << " ";
        sum = sum + n;
    }
    cout << endl;
    return sum;
}
