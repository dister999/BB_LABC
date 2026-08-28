#include <iostream>
using namespace std;
int x,y;

void passByValue(int num)
{
    num = 100;
}

void passByReference(int &num)
{
    num = 100;
}
void calculateRectangle(double width, double height, double &area, double &perimeter)
{
    perimeter = 2 * (width + height);
    area = width * height;
}

int main()
{
    int a = 10, b = 10;

    cout << "bf Value of a :" << a << endl;
    passByValue(a);
    cout << "at Value of a :" << a << endl;

    cout << "bf Value of b :" << b << endl;
    passByReference(b);
    cout << "at Value of b :" << b << endl;

    double w = 5.0, h=3.0;
    double myArea = 0, myPerimeter = 0;
    calculateRectangle(w,h,myArea,myPerimeter);
    cout << "Width :" << w << ", Height:" << h << endl;
    cout << "Calculated Area :" << myArea << endl;
    cout << "Calculated Perimeter :" << myPerimeter << endl;
    return 0;
}