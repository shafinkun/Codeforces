#include <bits/stdc++.h>
using namespace std;
int main()
{
    string word;
    cin >> word;

    int uppercase = 0, lowercase = 0;

    for (int i = 0; i < word.size(); i++)
    {
        if ('A' <= word[i] && 'Z' >= word[i])
            uppercase++;
        else if ('a' <= word[i] && 'z' >= word[i])
            lowercase++;
    }
   

    if (lowercase < uppercase)
    {
        for (int i = 0; i < word.size(); i++)
        {
            word[i] = toupper(word[i]);
        }
        cout << word << endl;
    }

    else
    {
        for (int i = 0; i < word.size(); i++)
        {
            word[i] = tolower(word[i]);
        }
        cout << word << endl;
    }

    return 0;
}