#include <iostream>
using namespace std;

int main()
{
    int LeftOparand, RightOparand;
    char Oparator;
    int Result;

    cout << "Please enter a simple expression\n";
    cout << "(number operator number) : ";
    cin >> LeftOparand >> Oparator >> RightOparand;
    // switch (Oparator)
    // {
    // case '+':
    //     Result = LeftOparand + RightOparand;
    //     break;

    // default:
    //     cout << LeftOparand << Oparator << " " << RightOparand << " equals " << Result << endl;
    //     return (1);
    // }
    if (Oparator == '+')
        Result = LeftOparand + RightOparand;
    else if (Oparator == '-')
        Result = LeftOparand - RightOparand;
    else if (Oparator == '*')
        Result = LeftOparand * RightOparand;
    else if (Oparator == '/')
        Result = LeftOparand / RightOparand;
    else
    {
        cout << " equals " << endl;
    }
    cout << LeftOparand << " " << Oparator << " " << RightOparand << " equals " << Result << endl;
    return (0);
}