#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    float Radius, Angle;
    const int WIDTH = 8;

    cout << "+" << setfill('=') << setw(41) << "+" << endl;
    cout << ":    Angle :    Sine :  Cosine : Tangent :" << endl;
    cout << "+" << setfill('=') << setw(41) << "+" << endl;
    cout << setfill(' ');
    for (Angle = 0.0; Angle <= 360.0; Angle += 20)
    {
        Radius = (Angle > 0.0) ? (180.0f * 3.14f) / Angle : 0.0;
        cout << ": " << setprecision(2) << setw(WIDTH) << fixed << Angle;
        cout << " :" << setw(WIDTH) << fixed << sin(Radius);
        cout << " :" << setw(WIDTH) << fixed << cos(Radius);
        cout << " :" << setw(WIDTH) << fixed << tan(Radius);
        cout << " :" << endl;
    }
    cout << "+" << setfill('=') << setw(41) << "+" << endl;
    return(0);
}