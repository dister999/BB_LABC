#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "\nEnter a character : ";
    cin >> ch;
    cout << endl;
    if (ch >= 'a' && ch <= 'z')
        cout << ch << " is lower charecter.";
    else if (ch >= 'A' && ch <= 'Z')
        cout << ch << " is Upper charecter.";
    else if (ch >= '0' && ch <= '9')
        cout << ch << " is numeric.";
    else
        cout << ch << " is special cheracter.";
    cout << endl;
    return (0);
}