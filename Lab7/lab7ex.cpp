#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

string Name;

int main()
{
    ifstream data;
    ofstream temp;

    string id, name, surname, findid;
    int score;
    
    data.open("s.dat", ios_base::in);
    temp.open("temp.dat", ios_base::out);
    cout << "Enter id to remove : ";
    cin >> findid;
    while (data >> id >> name >> surname >> score)
    {
        if (strcmp(id.c_str(), findid.c_str()) != 0)
        {
            temp << id << " "
                 << name << " "
                 << surname << " "
                 << score << endl;
        }
    }

    data.close();
    temp.close();

    remove("s.dat");
    rename("temp.dat", "s.dat");

    return 0;
}