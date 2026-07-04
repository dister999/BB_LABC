#include <iostream>
using namespace std;

int main()
{
    int L, W, Area, Perimeter;
    cout << "Enter Length :";
    cin >> L;
    cout << "Enter Width :";
    cin >> W;

    Area = L * W;
    Perimeter = 2 * (L + W);
    cout << "Area of Rectangle = "<< Area << endl;
    cout << "Perimeter of Rectangle = "<< Perimeter << endl;
    
}