#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int Menu();
void AddStudent(string);
void DisplayStudent(string);
void ReportGrade(string);
void SearchStudent(string);
string CalGrade(int);

int main()
{
    const string FileName = "student.dat";
    int c;
    do
    {
        c = Menu();
        switch (c)
        {
        case 0:
            break;
        case 1:
            AddStudent(FileName);
            break;
        case 2:
            DisplayStudent(FileName);
            break;
        case 3:
            ReportGrade(FileName);
            break;
        case 4:
            SearchStudent(FileName);
            break;
        default:
            cout << "Error try again" << endl;
        }
    } while (c != 0);
    cout << "Exit Program." << endl;
    return 0;
}

int Menu()
{
    int Choose;
    cout << "Program Add-Display Student Data\n";
    cout << "================================" << endl;
    cout << ": Main Menu" << endl;
    cout << "================================\n";
    cout << ": 0 - Exit\n";
    cout << ": 1 - Add Student\n";
    cout << ": 2 - Display Student\n";
    cout << ": 3 - Report Grade\n";
    cout << ": 4 - Search Student by Name\n";
    cout << "================================\n";
    cout << "Enter choose :";
    cin >> Choose;
    return Choose;
}

void AddStudent(string FN)
{
    ofstream OutFile(FN, ios_base::out | ios_base::app);

    if (OutFile.is_open())
    {
        string Id, Name;
        int Score;
        cout << "\nAdd Student\n";
        cout << "Enter ID :";
        cin >> Id;
        cout << "Enter Name :";
        cin >> Name;
        cout << "Enter Score :";
        cin >> Score;
        OutFile << Id << " " << Name << " " << Score << endl;
        OutFile.close();
        char wait;
        cin.get(wait);
    }
    else
    {
        cout << "File could not opened." << endl;
    }
}

void DisplayStudent(string FN)
{
    ifstream InFile(FN, ios_base::in);
    if (InFile.is_open())
    {
        string Id, Name;
        int Score;
        int n = 0;
        cout << "List Student\n";
        cout << "==========================\n";
        cout << right << setw(3) << "No."
             << left << setw(6) << "Id"
             << setw(10) << "Name"
             << "Score" << endl;
        cout << "==========================\n";
        while (InFile >> Id >> Name >> Score)
        {
            n++;
            cout << right << setw(3) << n << ":"
                 << left << setw(6) << Id
                 << setw(10) << Name
                 << Score << endl;
            if (n % 24 == 0)
            {
                char wait;
                cout << "\nPress Enter to continue...";
                cin.get(wait);
            }
        }

        InFile.close();
        char wait;
        cin.get(wait);
    }
    else
    {
        cout << "File could not opened." << endl;
    }
}

void ReportGrade(string FN)
{
    ifstream InFile(FN, ios_base::in);
    if (InFile.is_open())
    {
        string Id, Name;
        int Score;
        int n = 0;
        cout << "Report Grade\n";
        cout << "====================================\n";
        cout << right << setw(3) << "No."
             << left << setw(8) << "ID"
             << setw(12) << "Name"
             << setw(8) << "Score"
             << "Grade" << endl;
        cout << "====================================\n";
        while (InFile >> Id >> Name >> Score)
        {
            n++;
            cout << right << setw(3) << n << ":"
                 << left << setw(8) << Id
                 << setw(12) << Name
                 << setw(8) << Score
                 << CalGrade(Score) << endl;
        }
        InFile.close();
        char wait;
        cin.get(wait);
    }
    else
    {
        cout << "File could not opened." << endl;
    }
}

void SearchStudent(string FN)
{
    ifstream InFile(FN, ios_base::in);
    if (InFile.is_open())
    {
        string Id, Name, SearchName;
        int Score;
        int found = 0;
        cout << "\nSearch Student by Name\n";
        cout << "Enter name:";
        cin >> SearchName;

        while (InFile >> Id >> Name >> Score)
        {
            if (Name == SearchName)
            {
                cout << Id << ":" << Name
                     << " Score:" << Score
                     << " Grade:" << CalGrade(Score)
                     << endl;
                found = 1;
            }
        }

        if (found == 0)
        {
            cout << "Not Found" << endl;
        }
        InFile.close();
        char wait;
        cin.get(wait);
    }
    else
    {
        cout << "File could not opened." << endl;
    }
}

string CalGrade(int Score)
{
    if (Score >= 80)
        return "A";
    else if (Score >= 70)
        return "B";
    else if (Score >= 60)
        return "C";
    else if (Score >= 50)
        return "D";
    else
        return "F";
}