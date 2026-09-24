#include <iostream>
using namespace std;

int main()
{
    int Square[10], i;

    for (i = 0; i < 10; i++)
    {
        Square[i] = i * i;
    }

    for (i = 0; i < 10; i++)
    {
        cout << "Square[" << i << "] = " << Square[i] << endl;
    }

    return (0);
}