#include <bits/stdc++.h>
#define endl "\n";
using namespace std;
int main()
{
    string s1, s2, s3;
    cin >> s1 >> s2;

    for (auto u = 0; u != s1.size(); u++)
    {
        s1[u] = tolower(s1[u]);
        s2[u] = tolower(s2[u]);
    }
    int a = 0;
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] == s2[i])
            continue;
        else if (s1[i] > s2[i])
        {
            a += 1;
            break;
        }
        else
        {
            a -= 1;
            break;
        }
    }
    cout << a << endl;
}