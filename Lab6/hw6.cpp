#include <iostream>
using namespace std;

bool isPalindrome(char text[])
{
    int length = 0;
    while (text[length] != '\0')
    {
        length++;
    }
    for (int i = 0; i < length / 2; i++)
    {
        cout << text[i] << " = " << text[length - 1 - i] << endl;

        if (text[i] != text[length - 1 - i])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    char text[100];
    while (true)
    {
        cout << "Enter text : ";
        cin.getline(text, 100);
        cout << "======================" << endl;
        if (isPalindrome(text))
        {
            cout << "Your text is Palindrome." << endl;
        }
        else
        {
            cout << "Your text is not Palindrome." << endl;
        }
        cout << endl;
    }
    return 0;
}