#include <iostream>
using namespace std;

int main() {
    int line;
    char ch;

    cout << "Input number line : ";
    cin >> line;
    cout << "Input character   : ";
    cin >> ch;

    cout << endl;
    
    for (int i = 1; i <= line; i++) {
        for (int j = 1; j <= i; j++) {
            cout << ch;
        }
        cout << endl;
    }

    return 0;
}