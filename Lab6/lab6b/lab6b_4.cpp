#include <iostream>
#include <cstring>
using namespace std;

void SortString(char Data[][20]);

int main()
{
    char City[5][20];

    cout << "Enter city names\n\n";

    for (int i = 0; i < 5; i++)
    {
        cout << "Input name of city " << i + 1 << " : ";
        cin >> City[i];
    }

    SortString(City);

    cout << "\nList name of City\n";

    for (int i = 0; i < 5; i++)
    {
        cout << i + 1 << ". " << City[i] << endl;
    }

    return 0;
}

void SortString(char Data[][20])
{
    char Temp[20];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4 - i; j++)
        {
            if (strcmp(Data[j], Data[j + 1]) > 0)
            {
                strcpy(Temp, Data[j]);
                strcpy(Data[j], Data[j + 1]);
                strcpy(Data[j + 1], Temp);
            }
        }
    }
}