/*___________________In the name of Allah________________*/
/*____________________Solved By shafinkun________________*/
// Problem link : https://codeforces.com/problemset/problem/2039/B
// Inqilab Zindabad!!!
#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
const int MOD = 1e9 + 7;

void solve()
{
    string s;
    cin >> s;

    int sz = s.size();
    if (sz < 2)
    {
        cout << -1 << endl;
        return;
    }
    //check for two consecutive same characters
    for (int i = 0; i < sz - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            cout << s[i] << s[i + 1] << endl;
            return;
        }
    }

    //check for three consecutive different characters
    for(int i = 0; i < sz - 2; i++)
    {
        if(s[i] != s[i + 1] and s[i + 1] != s[i + 2] and s[i] != s[i + 2])
        {
            cout << s[i] << s[i + 1] << s[i + 2] << endl;
            return;
        }
    }

    cout << -1 << endl;
    return;
}

signed main()
{
    optimize();
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}