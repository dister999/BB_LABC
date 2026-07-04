#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string ID = "6906021410263";
    string Name = "Sitthawit Srieiad";
    float Gpa = 4.00;
    short Age = 20;
    string Department = "Information Technology";
    string Room = "1DA";
    cout << "Student Code : " << ID << endl;
    cout << "Student Name : " << Name << endl;
    cout << "Department : " << Department << endl;
    cout << "Room : " << Room << endl;
    cout << "Age : " << Age << endl;
    cout <<fixed << setprecision(2) << "Gpa : " << Gpa << endl;
    return (0);
}