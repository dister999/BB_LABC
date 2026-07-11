#include <iostream>
using namespace std;

int main()
{
    int ticketP, H, totalP;
    string status;
    cout << "=============================" << endl;
    cout << "Enter Ticket Price : ";
    cin >> ticketP;
    cout << "Enter Height (cm):";
    cin >> H;
    if (H > 150)
    {
        status = "adult";
        totalP = ticketP;
    }
    else {
        status = "kid";
        totalP = ticketP / 2;
    }
    cout << "You are "<< status <<"."<< endl;
    cout << "Total Price : " << totalP << endl;
    cout << "=============================" << endl;
    return (0);
}