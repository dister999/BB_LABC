#include <iostream>
using namespace std;

int main()
{
    
    string ID, Name, Surname;
    int Age;
    // input
    cout << "Enter name : ";
    cin >> Name >> Surname;
    cout << "Enter age : ";
    cin >> Age;
    // Output
    cout << "\nHello, " << Name <<" "<< Surname << "." << endl;
    cout << "You have" << Age << "year old." << endl;
    cout << "You are beginner programmer." << endl;
    return (0);
}