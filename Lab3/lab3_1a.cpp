#include <iostream>

using namespace std;

int main()
{
    double f, c;
    cout << "Enter f : ";
    cin >> f;
    c = (5.0 / 9) * (f - 32);
    cout << 5.0 / 9 << endl;
    cout << "f = " << f << endl;
    cout << "c = " << c << endl;
    f = ((9.0 / 5) * c) + 32.0;
    cout << "f = " << f << endl;
    cout << "c = " << c << endl;
    return (0);
}