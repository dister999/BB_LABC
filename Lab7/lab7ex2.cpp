#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
    string FileName;
    string Data;
    ifstream InFile;
    int n = 0;

    cout << "Enter filename : ";
    cin >> FileName;

    InFile.open(FileName, ios_base::in);

    if (InFile.is_open())
    {
        cin.ignore();

        while (getline(InFile, Data))
        {
            cout << Data << endl;
            n++;

            if (n == 24)
            {
                cout << "Press Enter to continue...";
                cin.get();
                n = 0;
            }
        }

        InFile.close();
    }
    else
    {
        cout << "File could not opened." << endl;
    }
    return 0;
}