#include <iostream>

using namespace std;

int main()
{
    string message;
    cout << "Enter message : ";
    getline(cin, message);

    int upper_count = 0;
    int lower_count = 0;
    int space_count = 0;
    int special_count = 0;

    for (int i = 0; i < message.length(); i++)
    {
        char c = message[i];

        if (c >= 'A' && c <= 'Z')
        {
            upper_count++;
        }
        else if (c >= 'a' && c <= 'z')
        {
            lower_count++;
        }
        else if (c == ' ')
        {
            space_count++;
        }
        else
        {
            special_count++;
        }
    }

    cout << "Total " << message.length() << " characters\n";
    if (upper_count > 0)
        cout << "Your message has " << upper_count << " upper characters.\n";
    if (lower_count > 0)
        cout << "Your message has " << lower_count << " lower characters.\n";
    if (space_count > 0)
        cout << "Your message has " << space_count << " space characters.\n";
    if (special_count > 0)
        cout << "Your message has " << special_count << " special characters.\n";

    return 0;
}