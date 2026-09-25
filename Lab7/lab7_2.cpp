#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

void GetandWrite(ofstream &OutFile);
void ReadandDisplay(ifstream &InFile);

int main()
{
    string Filename;
    ofstream OutFlie;
    ifstream InFile;
    cout << "Enter file name:";
    cin >> Filename;
    cout << "===" << endl;
    OutFlie.open(Filename);
    cout << "Now open File" << Filename << " for write." << endl;
    GetandWrite(OutFlie);
    OutFlie.close();

    InFile.open(Filename);
    ReadandDisplay(InFile);
    InFile.close();
    return (0);
}

void GetandWrite(ofstream &OutFile)
{
    string Id, Name, Surname;
    int Score;

    for (int n = 1; n <= 3; n++)
    {
        cout << "Student No." << n << endl;
        cout << "Enter Id:";
        cin >> Id;
        cout << "Enter Name:";
        cin >> Name;
        cout << "Enter Surname:";
        cin >> Surname;
        cout << "Enter Score:";
        cin >> Score;

        OutFile << Id << " " << Name << " "
                << Surname << " " << Score << endl;
    }
    cout << endl;
}

void ReadandDisplay(ifstream &InFile)
{
    string Id, Name, Surname;
    int Score;
    for (int n = 1; n <= 3; n++)
    {
        InFile >> Id >> Name >> Surname >> Score;
        cout << "Id:" << Id << " Name: " << Name << " " << Surname << endl;
        cout << "Score:" << Score << endl;
    }
    cout << "+++" << endl;
}