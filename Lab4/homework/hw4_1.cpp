#include <iostream>
using namespace std;

string cal_grade(int score);

int main()
{
    int choice;
    do
    {
        cout << "Cal Grade Demo 1\n";
        cout << "1: test function\n";
        cout << "2: input score\n";
        cout << "3: Exit Program\n";
        cout << "Please Enter Your choice:";
        cin >> choice;

        if (choice == 1)
        {
            for (int i = -2; i <= 102; i++)
            {
                if (i >= 0 && i <= 100)
                {
                    cout << "Score " << i << " = " << cal_grade(i) << "\t";
                    if (i % 5 == 0) cout << endl;
                }
                else
                {
                    cout << "Error Score " << i << " is not in range 0- 100\n";
                }
            }
            cout << endl;
        }
        else if (choice == 2)
        {
            int score;
            cout << "Enter Score :";
            cin >> score;
            if (score >= 0 && score <= 100)
            {
                cout << "Score " << score << " = " << cal_grade(score) << endl;
            }
            else
            {
                cout << "Error Score " << score << " is not in range 0- 100\n";
            }
            cout << endl;
        }
        else if (choice == 3)
        {
            cout << "End program" << endl;
            break;
        }

    } while (true);

    return 0;
}

string cal_grade(int score)
{
    string grade;
    if (score >= 90)
        grade = "A";
    else if (score >= 80)
        grade = "B";
    else if (score >= 70)
        grade = "C";
    else if (score >= 60)
        grade = "D";
    else
        grade = "F";

    return grade;
}
