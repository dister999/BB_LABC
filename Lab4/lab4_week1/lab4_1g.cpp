#include <iostream>
#include <cmath>
using namespace std;

void fn1(char, float);
void fn2(int, string);
void fn3(bool);

int main()
{
    fn1('S', 100); // fn1 true
    fn1('W', 100); // fn1 false
    fn2(0, "A-123"); // fn2 true
    fn2(-2, "B-456"); // fn2 false
    fn3(true); // fn3 true
    fn3(false); // fn3 false
    return (0);
}

void fn1(char status, float pay)
{
    float tax;
    if (status == 'S')
        tax = 0.20 * pay;
    else
        tax = 0.14 * pay;
    cout << "pay " << tax << endl;

    tax = ((status == 'S') ? 0.20 * pay : 0.14 * pay);
    cout << "pay () " << tax << endl;
}

void fn2(int pastdue, string accout_no)
{
    float credit = 0;
    if (pastdue > 0) {
        cout << "Accout number " << accout_no << " is overdue\n";
        credit = 0;
    } else {
        credit = 1000.0;
    }
    cout << "credit " << credit << endl;
}

void fn3(bool circle)
{
    float area;
    if (circle) {
        float radius;
        cout << "Enter radius: ";
        cin >> radius;
        area = 3.14159 * radius * radius;
        cout << "Area of circle = " << area << endl;
    } else {
        float length, width;
        cout << "Enter length and width: ";
        cin >> length >> width;
        area = length * width;
        cout << "Area of rectangle = " << area << endl;
    }
}