#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;
string Name;
int main()
{
    ifstream data; // เปิดเพื่อเขียน
    ofstream temp; // เปิดเพื่ออ่าน

    string id, name, surname, findid;
    int score;
    cout << (strcmp("001", "001") != 0 ? "true" : "false");

    data.open("new_s.dat", ios_base::in);
    temp.open("temp.dat", ios_base::out);

    cout << "Enter id to remove";
    cin >> findid;
    data >> id >> name >> surname >> score;

    while (!data.eof())
    {
        if (strcmp(id.c_str(), findid.c_str()) != 0)
        {
            temp << id << " " << name << "" << surname << " " << score << endl;
        }
        else
        {
        }
        data >> id >> name >> surname >> score;
    }
    data.close();
    temp.close();

    // save to temp.dat;
    remove("new_s.dat");
    rename("temp.dat", "s.dat");

    return (0);
}