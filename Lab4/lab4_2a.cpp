#include <iostream>
using namespace std;

void cal_grade(int mark) {
    if (mark >= 80) cout << "A";
    else if (mark >= 70) cout << "B";
    else if (mark >= 60) cout << "C";
    else if (mark >= 50) cout << "D";
    else cout << "F";
}

void greeding_time(float time) {
    if ((time >= 0.00) && (time < 24.00)) {
        if ((time >= 0.00) && (time < 12.00))
            cout << "Good Morning";
        else if ((time >= 12.00) && (time < 18.00))
            cout << "Good Afternoon";
        else if ((time >= 18.00) && (time < 24.00))
            cout << "Good Evening";
    }
    else cout << "Time is out of range";
}

int main() {
    int mark;
    float time;

    cout << "Enter mark: ";
    cin >> mark;
    cal_grade(mark);
    cout << endl;

    cout << "Enter time: ";
    cin >> time;
    greeding_time(time);
    cout << endl;

    return 0;
}