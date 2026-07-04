#include <iostream>
using namespace std;

int main()
{
    int P, V, Vsum, NP;
    cout << "=================================" << endl;
    cout << "Enter PRICE :";
    cin >> P;
    cout << "Enter VAT :";
    cin >> V;

    Vsum = (V * P) / 100;
    NP = P + Vsum;
    cout << "Net Price of Product = " << NP << endl;
    cout << "=" << endl;
    cout << "Net Price (Including VAT) :" << NP << endl;
    cout << "Price Excluding VAT = " << P << endl;
    cout << "VAT Amount = " << Vsum << endl;
    cout << "=================================" << endl;
}