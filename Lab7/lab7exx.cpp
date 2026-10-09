#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int Menu();
void AddData();
void ChangeName();

int main()
{
    int c;
    do
    {
        c = Menu();
        switch (c)
        {
        case 1:
            AddData();
            break;
        case 2:
            ChangeName();
            break;
        case 0:
            cout << "Exit Program." << endl;
            break;
        default:
            cout << "Error try again" << endl;
        }
    } while (c != 0);
    return 0;
}

int Menu()
{
    int Choose;
    cout << "\n=MENU\n";
    cout << "[1] Add Data\n";
    cout << "[2] Change Name by Name\n";
    cout << "[0] Exit\n";
    cout << "\nEnter choose : ";
    cin >> Choose;
    return Choose;
}

void AddData()
{
    ofstream OutFile("student.dat", ios_base::out | ios_base::app);
    if (OutFile.is_open())
    {
        string Name;
        int Score;
        cin.ignore(1000, '\n');
        cout << "Enter name : ";
        getline(cin, Name);
        cout << "Enter Score : ";
        cin >> Score;
        OutFile << Name << "," << Score << endl;
        OutFile.close();
        cout << "Add Data Complete" << endl;
    }
    else
    {
        cout << "File could not opened." << endl;
    }
}

void ChangeName()
{
    ifstream InFile("student.dat", ios_base::in);
    ofstream TempFile("temp.dat", ios_base::out);

    if (!InFile.is_open() || !TempFile.is_open())
    {
        cout << "File could not opened." << endl;
        return;
    }

    string Line, Name, FindName, NewName;
    int Score;
    int found = 0;

    cin.ignore(1000, '\n');

    cout << "FindName : ";
    getline(cin, FindName);

    cout << "New Name : ";
    getline(cin, NewName);

    while (getline(InFile, Line))
    {
        int i = 0;
        while (i < (int)Line.length() && Line[i] != ',')
        {
            i++;
        }

        if (i < (int)Line.length())
        {
            Name = Line.substr(0, i);
            Score = 0;

            for (int j = i + 1; j < (int)Line.length(); j++)
            {
                if (Line[j] >= '0' && Line[j] <= '9')
                {
                    Score = Score * 10 + (Line[j] - '0');
                }
            }

            if (Name == FindName)
            {
                TempFile << NewName << "," << Score << endl;
                found = 1;
            }
            else
            {
                TempFile << Line << endl;
            }
        }
        else
        {
            TempFile << Line << endl;
        }
    }

    InFile.close();
    TempFile.close();

    if (found == 1)
    {
        remove("student.dat");
        rename("temp.dat", "student.dat");
        cout << "Change Name Complete" << endl;
    }
    else
    {
        remove("temp.dat");
        cout << "Not Found" << endl;
    }
}
