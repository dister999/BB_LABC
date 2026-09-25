#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
    string FileName;
    ifstream InFile;
    ofstream OutFile;
    int value;

    srand(time(0));
    cout << "Enter file name :";
    cin >> FileName;
    cout << endl;

    OutFile.open(FileName, ios_base::out | ios_base::app);
    cout << "Now open file " << FileName << " for write" << endl;

    for (int n = 1; n <= 10; n++)
    {
        value = rand() % 100;
        cout << setw(5) << value;
        OutFile << value << " ";
    }
    cout << endl;

    OutFile.close();

    InFile.open(FileName);
    cout << "Now open file " << FileName << "for read." << endl;
    for (int i = 0; !InFile.eof(); i++)
    {
        InFile >> value;
        cout << setw(5) << value;
        if (i % 10 == 0)
            cout << endl;
    }
    cout << endl;
    InFile.close();
    return (0);
}