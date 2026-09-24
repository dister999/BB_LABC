#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int Minimum(int Temp[][4], const int Students, const int Exam);
int Maximum(int Temp[][4], const int Students, const int Exam);
double Average(int Temp[], const int Exam);

int main()
{
    const int MaxStudent = 3;
    const int MaxExam = 4;
    int Score[MaxStudent][MaxExam];

    srand((unsigned int)time(0));

    for (int r = 0; r < MaxStudent; r++)
    {
        for (int c = 0; c < MaxExam; c++)
        {
            Score[r][c] = rand() % 30 + 50;
        }
    }

    cout << "          ";
    for (int c = 0; c < MaxExam; c++)
    {
        cout << "[" << c << "]  ";
    }
    cout << endl;

    for (int r = 0; r < MaxStudent; r++)
    {
        cout << "Score[" << r << "] ";

        for (int c = 0; c < MaxExam; c++)
        {
            cout << setw(5) << Score[r][c];
        }

        cout << endl;
    }

    cout << "Lowest score : "
         << Minimum(Score, MaxStudent, MaxExam) << endl;

    cout << "Highest score : "
         << Maximum(Score, MaxStudent, MaxExam) << endl;

    for (int r = 0; r < MaxStudent; r++)
    {
        cout << "Average of student " << r << " is "
             << fixed << setprecision(2)
             << Average(Score[r], MaxExam) << endl;
    }

    return 0;
}

int Minimum(int Temp[][4], const int Students, const int Exam)
{
    int LowScore = Temp[0][0];

    for (int r = 0; r < Students; r++)
    {
        for (int c = 0; c < Exam; c++)
        {
            if (Temp[r][c] < LowScore)
            {
                LowScore = Temp[r][c];
            }
        }
    }

    return LowScore;
}

int Maximum(int Temp[][4], const int Students, const int Exam)
{
    int HighScore = Temp[0][0];

    for (int r = 0; r < Students; r++)
    {
        for (int c = 0; c < Exam; c++)
        {
            if (Temp[r][c] > HighScore)
            {
                HighScore = Temp[r][c];
            }
        }
    }

    return HighScore;
}

double Average(int Temp[], const int Exam)
{
    int total = 0;

    for (int c = 0; c < Exam; c++)
    {
        total += Temp[c];
    }

    return static_cast<double>(total) / Exam;
}