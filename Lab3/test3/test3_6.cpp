#include <iostream>
using namespace std;

int main()
{
    int S, E, h, m, s;
    cout << "Data inputs are integer!." << endl;
    cout << "\n==========================================================" << endl;
    cout << "\nEnter start kilometer : ";
    cin >> S;
    cout << "\nEnter end kilometer : ";
    cin >> E;
    cout << "\nEnter time used (hour minute second): ";
    cin >> h >> m >> s;
    cout << "\n==========================================================" << endl;
    int KM = S - E;
    cout << "\nCar traveled " << KM << " kilometers in " << h << " hrs " << m << " min " << s << " sec." << endl;
    double T = h + (m / 60.0) + (s / 3600.0);
    double speed = KM / T;
    cout << "Average velocity was " << speed << " kph." << endl;
    return (0);
}