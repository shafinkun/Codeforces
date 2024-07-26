#include <bits/stdc++.h>
#define endl '\n';
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
int main()
{
    optimize();
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '.')
        {
            cout << 0;
        }
        else if (s[i] == '-' && s[i + 1] == '.')
        {
            cout << 1;
            i++;
        }
        else if (s[i] == '-' && s[i + 1] == '-')
        {
            cout << 2;
            i++;
        }
    }

    return 0;
}