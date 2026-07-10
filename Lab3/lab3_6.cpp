#include <iostream>
using namespace std;

int main() {
    int number;
    int flag,i;
    string result;

    cout << "Enter number :";
    cin >> number;
    i = number;
    result = ((number % 2) == 0 ? "even":"odd");
    flag = (i<0) ? 0 : 100;
    cout << i << " is "<< result <<" number." << endl;
    return (0);
}