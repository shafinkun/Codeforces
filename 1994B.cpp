/*___________________In the name of Allah________________*/
/*____________________Solved By shafinkun________________*/
// Problem link : https://codeforces.com/problemset/problem/1994/B

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
    int n;
    cin >> n;

    vector<pair<char, bool>> s;
    string t;
    
    s.push_back({'0', 0});

    for(int i = 0; i < n; ++i)
    {
        char c;
        cin >> c;

        if(s.back().second == 1 or s.back().first == '1' or c == '1')
        {
            s.push_back({c, 1});
        }
        else
        {
            s.push_back({c, 0});
        }
    }

    cin >> t;

    for(int i = 0; i < n; ++i)
    {
        if(s[i + 1].first != t[i] and s[i + 1].second == 0)
        {
            no;
            return;
        }
    }

    yes;
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