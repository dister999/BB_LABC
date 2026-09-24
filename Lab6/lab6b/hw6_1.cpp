#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double data[20][2];
    int chairman;
    int totalVotes = 0;
    int notVotes;

    cout << "Enter number student chairman : ";
    cin >> chairman;

    for (int i = 0; i < chairman; i++)
    {
        cin >> data[i][0];
        totalVotes += data[i][0];
    }

    notVotes = 500 - totalVotes;

    for (int i = 0; i < chairman; i++)
    {
        data[i][1] = (data[i][0] / totalVotes) * 100;
    }

    cout << "\nNumber of right student : 500" << endl;

    cout << "Number of Votes : " << totalVotes
         << " = " << fixed << setprecision(1)
         << (double)totalVotes / 500 * 100 << "%" << endl;

    cout << "Number of not Votes : " << notVotes
         << " = " << fixed << setprecision(1)
         << (double)notVotes / 500 * 100 << "%" << endl;

    cout << "\nResult of election chairman" << endl;
    cout << "------------------------------" << endl;

    cout << left << setw(8) << "No."
         << setw(12) << "Votes"
         << "Percent(%)" << endl;

    cout << "------------------------------" << endl;

    cout << fixed << setprecision(2);

    for (int i = 0; i < chairman; i++)
    {
        cout << left << setw(8) << i + 1
             << setw(12) << (int)data[i][0]
             << data[i][1] << endl;
    }

    cout << "------------------------------" << endl;

    cout << left << setw(8) << "Total"
         << setw(12) << totalVotes
         << "100.00" << endl;

    return 0;
}