#include <iostream>
using namespace std;

int main()
{
    char Ch;
    string Message;
    cout << "Enter character : ";
    cin >> Ch;
    cout << "Current character is " << Ch << "\n";
    if (isalnum(Ch))
    {
        if (isalpha(Ch))
        {
            if (isupper(Ch))
            {
                Message = "upper charecter\n";
                cout << "'" << Ch << "'  convert to lower"
                     << "'" << (char)tolower(Ch) << "'" << endl;
            }
            else
            {
                Message = "lower charecter\n";
                cout << "'" << Ch << "'  convert to upper"
                     << "'" << (char)toupper(Ch) << "'" << endl;
            }
        }
        else
        {
            Message = "digit.";
        }
    }
    else
    {
        Message = "special charecter.";
    }
    cout << "'" << Ch << "' is " << Message << endl;
    return (0);
}
