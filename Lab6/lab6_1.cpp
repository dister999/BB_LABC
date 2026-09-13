#include <iostream>
using namespace std;

int main()
{
    int A[5] = {16, 12, 6, 8, 14};
    char B[] = {'A', 'E', 'I', '0', 'U'};
    float C[10];

    cout << "Address A :" << &A << " Size = " << size(A) << endl;
    cout << "size of " << sizeof(A) / sizeof(A[0]) << endl;

    for (int i = 0; i < size(A); i++)
    {
        cout << i << " Address = " << &A[i]
             << " Value = " << A[i] << endl;
    }

    cout << "Address B :" << &B << " Size = " << size(B) << endl;
    cout << "size of " << sizeof(B) / sizeof(B[0]) << endl;

    for (int i = 0; i < size(B); i++)
    {
        cout << i << " Address = " << &B[i]
             << " Value = " << B[i] << endl;
    }

    cout << "Address C :" << &C << " Size = " << size(C) << endl;
    cout << "size of " << sizeof(C) / sizeof(C[0]) << endl;

    for (int i = 0; i < size(C); i++)
    {
        cout << i << " Address = " << &C[i]
             << " Value = " << C[i] << endl;
    }

    return (0);
}