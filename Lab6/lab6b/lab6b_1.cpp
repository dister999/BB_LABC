#include <iostream>
#include <iomanip>
using namespace std;

void tunc3();

int main()
{
    tunc3();
    return 0;
}

void tunc3()
{
    char Month[12][10] = {
        "January", "February", "March", "April",
        "May", "June", "July", "August",
        "September", "October", "November", "December"
    };

    int rows = sizeof(Month) / sizeof(Month[0]);
    int cols = sizeof(Month[0]) / sizeof(Month[0][0]);

    cout << "rows = " << rows << endl;
    cout << "cols = " << cols << endl;

    cout << endl;

    for (int i = 0; i < rows; i++)
    {
        cout << "Month" << setw(2) << i << " = ";

        for (int j = 0; j < cols; j++)
        {
            cout << "[" << Month[i][j] << "]";
        }

        cout << endl;
    }
}