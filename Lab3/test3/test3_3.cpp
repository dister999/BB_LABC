#include <iostream>

using namespace std;

int main()
{
    double C, F;
    cout << "Enter F : ";
    cin >> F;
    C = 5.0 / 9 * (F - 32);
    cout << "F convert to C = " << C << endl;
    F = (9.0 / 5) * C + 32;
    cout << "C convert to F = " << F << endl;
    return (0);
}