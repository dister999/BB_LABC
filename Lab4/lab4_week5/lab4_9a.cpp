#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int digit = 0;
    cout << setfill(' ') << "digit = ";
    while(digit <= 9){
        cout << setw(3) << digit << " ";
        digit++;
    }
    cout << ":" << digit << endl;

    digit = 20;
    cout << "digit = ";
    while(digit > 10){
        cout << setw(3) << digit << " ";
        digit--;
    }
    cout <<":"<< digit << endl;
    return (0);
}