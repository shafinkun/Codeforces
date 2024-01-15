/*_______________In the name of Allah_____________*/
/*________________Solved By shafinkun_____________*/
// Problem link : https://codeforces.com/contest/1714/problem/A

#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
#define ll long long
#define NO cout << "NO" << endl
#define YES cout << "YES" << endl
void solve()
{
    int n, h, m;
    cin >> n >> h >> m;

    set<pair<int, int>> s;
    for (int i = 1; i <= n; ++i)
    {
        int x, y;
        cin >> x >> y;
        s.insert({x, y});
    }

    int hour, minute;
    if (s.begin()->first >= h)
    {
        if (s.begin()->second >= m)
        {
            minute = s.begin()->second - m;
            hour = s.begin()->first - h;
        }
        else
        {
            minute = s.begin()->second + 60 - m;
            hour = s.begin()->first - h - 1;
        }
    }
    else
    {
        if (s.begin()->second >= m)
        {
            minute = s.begin()->second - m;
            hour = 24 + s.begin()->first - h;
        }
        else
        {
            minute = s.begin()->second + 60 - m;
            hour = 24 + s.begin()->first - h - 1;
        }
    }

    cout << hour << ' ' << minute << endl;

    return;
}

int main()
{
    optimize();
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}