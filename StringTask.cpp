#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s[100];
    cin >> s;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || s[i] == 'i' || s[i] == 'I' || s[i] == 'o' || s[i] == 'O' || s[i] == 'u' || s[i] == 'U' || s[i] == 'Y' || s[i] == 'y')
        {}
        else
        {
            if (s[i] <= 'Z')
            {
                char cha = tolower(s[i]);
                cout << "." << cha;
                continue;
            }
            cout << "." << s[i];
        }
    }
    return 0;
}