#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter number : ";
    cin >> number;

    int d3 = number / 1000;
    number = number % 1000;
    int d2 = number / 100;
    number = number % 100;
    int d1 = number / 10;
    int d0 = number % 10;

    cout << d3 << "   " << d2 << "   " << d1 << "   " << d0 << endl;
    
    return 0;
}
