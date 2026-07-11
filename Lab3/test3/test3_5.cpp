#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter binary number : ";
    cin >> number;

    int d3 = number / 1000;
    int d2 = (number / 100) % 10;
    int d1 = (number / 10) % 10;
    int d0 = number % 10;   

    int decimal = (d3 * 8) + (d2 * 4) + (d1 * 2) + (d0 * 1);
    cout << "Decimal value of " << number << " = " << decimal << endl;
    
    return 0;
}
