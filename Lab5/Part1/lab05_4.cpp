#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char Str1[30], Str2[30];

    cout << "Enter string 1 : ";
    cin >> Str1;
    cout << "Enter string 2 : ";
    cin >> Str2;

    cout << endl;
    // cout << "strcat(Str1, Str2) = " << strcat(Str1,Str2) << endl;
    cout << "strcat(Str1, 's') = " << strchr(Str1,'s') << endl;
    cout << "strcat(Str1, Str2) = " << strcmp(Str1, Str2) << endl;
    cout << "strcpy(Str1, Str2) = " << strcpy(Str1, Str2) << endl;
    cout << "strlen(Str1) = " << strlen(Str1) << endl;
    cout << "strlen(Str2) = " << strlen(Str2) << endl;
    cout << "String 1         : " << Str1 << endl;
    cout << "String 1 Reverse : ";
    for(int N=strlen(Str1)-1; N>=0; N--){
        cout << Str1[N];
    }
    cout << endl;
    return (0);
}