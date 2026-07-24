#include <iostream>
using namespace std;
void cal_grade(int);
void greeting_time(float);

int main()
{
    // cal_grade(80);
    // cal_grade(79);
    // cal_grade(71);
    // cal_grade(70);
    // cal_grade(69);
    greeting_time(24.00);
    greeting_time(1.60);
    greeting_time(1.00);
    greeting_time(13.25);
    greeting_time(19.00);
    return (0);
}

void cal_grade(int mark)
{
    cout << mark << "=";
    if (mark >= 80)
        cout << "A";
    else if (mark >= 70)
        cout << "B"; // 79-70
    else if (mark >= 60)
        cout << "C"; // 69-60
    else if (mark >= 50)
        cout << "D"; // 59-50
    else
        cout << "F";
    cout << endl;
    // if(mark<=79 && mark >= 70) cout << "B"; // 79-70
}

void greeting_time(float time)
{
    int minute = ((time - (int)time) * 100);
    cout << (int)time << ":" << minute << endl;
    if ((time >= 0.00) && (time <= 23.59))
    {
        if ((minute >= 0) && (minute <= 59))
        {
            if ((time >= 0.00) && (time < 12.00))
            {
                cout << "Good Morning\n";
            }
            else if ((time >= 12.00) && (time < 18.00))
            {
                cout << "Good Afternoon\n";
            }
            else if ((time >= 18.00) && (time < 23.59))
            {
                cout << "Good Evening\n";
            }
        }
        else
        {
            cout << "Time is out of range (min)\n";
        }
    }
    else
    {
        cout << "Time is out of range (hrs)\n";
    }
}