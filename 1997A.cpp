/*___________________In the name of Allah________________*/
/*____________________Solved By shafinkun________________*/
// Problem link : https://codeforces.com/problemset/problem/1997/A

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

    int index = 0;
    for (int i = 1; i < s.size(); ++i)
    {
        if (s[i] == s[i - 1])
        {
            index = i;
            break;
        }
    }
    for (int i = 0; i < s.size(); ++i)
    {
        if (i == index)
        {
            char c;
            if (s[i] == 'z')
                c = 'a';
            else
                c = s[i] + 1;

            cout << c;
        }
        cout << s[i];
    }
    cout << endl;

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