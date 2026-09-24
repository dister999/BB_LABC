#include <iostream>
using namespace std;

void selectionsort(int temp[], int size);
void bubblesort(int temp[], int size);
int binarysearch(int temp[], int size, int Search);
void swap(int &a, int &b);
void display(int temp[], int size);

int main()
{
    int Data1[] = {7, 3, 5, 1, 2};
    int Data2[] = {7, 3, 5, 1, 2};
    int size = 5;
    int Search;

    cout << "=== Original Data ===" << endl;
    display(Data1, size);

    cout << "=== Selection Sort ===" << endl;
    selectionsort(Data1, size);

    cout << "=== Bubble Sort ===" << endl;
    bubblesort(Data2, size);

    cout << "=== Binary Search ===" << endl;
    cout << "Sorted Data: ";
    display(Data1, size);

    cout << "Input number to search: ";
    cin >> Search;

    int result = binarysearch(Data1, size, Search);

    if (result == -1)
    {
        cout << "Record not found" << endl;
    }
    else
    {
        cout << "Record found at index " << result << endl;
    }

    return 0;
}

void selectionsort(int temp[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int MIN = i;

        for (int j = i + 1; j < size; j++)
        {
            if (temp[MIN] > temp[j])
            {
                MIN = j;
            }
        }

        if (i != MIN)
        {
            swap(temp[MIN], temp[i]);
        }

        cout << "Pass " << i + 1 << ": ";
        display(temp, size);
    }
}

void bubblesort(int temp[], int size)
{
    int flag = 1;
    int E = size - 1;
    int pass = 1;

    while (flag == 1)
    {
        flag = 0;

        for (int j = 0; j < E; j++)
        {
            if (temp[j] > temp[j + 1])
            {
                swap(temp[j], temp[j + 1]);
                flag = 1;
            }
        }

        cout << "Pass " << pass++ << ": ";
        display(temp, size);

        E = E - 1;
    }
}

int binarysearch(int temp[], int size, int Search)
{
    int LB = 0;
    int UB = size - 1;
    int flag = 0;
    int R = -1;

    while (flag == 0)
    {
        R = (LB + UB) / 2;

        if (temp[R] == Search)
        {
            flag = 1;
        }
        else if (Search > temp[R])
        {
            LB = R + 1;
        }
        else
        {
            UB = R - 1;
        }

        if (LB > UB)
        {
            flag = 2;
        }
    }

    if (flag == 1)
    {
        return R;
    }

    return -1;
}

void display(int temp[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << temp[i] << " ";
    }
    cout << endl;
}

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}