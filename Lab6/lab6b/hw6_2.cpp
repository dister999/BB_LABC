#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

const int N = 20;

struct Student
{
    string id;
    string name;
    double test1;
    double test2;
    double test3;
    double total;
};

int getdata(Student s[])
{
    int n = 0;

    while (n < N)
    {
        cout << "\nEnter Student ID (0 = End) : ";
        cin >> s[n].id;

        if (s[n].id == "0")
        {
            break;
        }

        cout << "Enter Name : ";
        cin.ignore();
        getline(cin, s[n].name);

        cout << "Enter Test1 : ";
        cin >> s[n].test1;

        cout << "Enter Test2 : ";
        cin >> s[n].test2;

        cout << "Enter Test3 : ";
        cin >> s[n].test3;

        s[n].total = s[n].test1 + s[n].test2 + s[n].test3;

        n++;
    }

    return n;
}

void sortdata(Student s[], int n)
{
    Student temp;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (s[j].total < s[j + 1].total)
            {
                temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }
}

void average(Student s[], int n,
             double &avg1, double &avg2,
             double &avg3, double &avgTotal)
{
    double sum1 = 0;
    double sum2 = 0;
    double sum3 = 0;
    double sumTotal = 0;
    for (int i = 0; i < n; i++)
    {
        sum1 += s[i].test1;
        sum2 += s[i].test2;
        sum3 += s[i].test3;
        sumTotal += s[i].total;
    }
    avg1 = sum1 / n;
    avg2 = sum2 / n;
    avg3 = sum3 / n;
    avgTotal = sumTotal / n;
}

void displaydata(Student s[], int n,
                 double avg1, double avg2,
                 double avg3, double avgTotal)
{
    cout << "\n\n";
    cout << "------------------------------------------------------------------------------------------------\n";
    cout << left
         << setw(6) << "No."
         << setw(10) << "Id"
         << setw(22) << "Name"
         << right
         << setw(14) << "Test1(25%)"
         << setw(14) << "Test2(25%)"
         << setw(14) << "Test3(50%)"
         << setw(14) << "Total(100%)"
         << endl;
    cout << "------------------------------------------------------------------------------------------------\n";
    cout << fixed << setprecision(2);
    for (int i = 0; i < n; i++)
    {
        cout << left
             << setw(6) << i + 1
             << setw(10) << s[i].id
             << setw(22) << s[i].name
             << right
             << setw(12) << s[i].test1
             << setw(12) << s[i].test2
             << setw(12) << s[i].test3
             << setw(12) << s[i].total
             << endl;
    }
    cout << "------------------------------------------------------------------------------------------------\n";
    cout << left << setw(38) << "Average of mark"
         << right
         << setw(12) << avg1
         << setw(12) << avg2
         << setw(12) << avg3
         << setw(12) << avgTotal
         << endl;
}

int main()
{
    Student s[N];
    int n;
    double avg1, avg2, avg3, avgTotal;
    n = getdata(s);
    if (n == 0)
    {
        cout << "\nNo data." << endl;
        return 0;
    }
    sortdata(s, n);
    average(s, n, avg1, avg2, avg3, avgTotal);
    displaydata(s, n, avg1, avg2, avg3, avgTotal);

    return 0;
}