/*_______________In the name of Allah_____________*/
/*________________Solved By shafinkun_____________*/
// Problem link : https://codeforces.com/contest/1914/problem/D

#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'

void solve()
{
    int n;
    cin >> n;

    vector<pair<int, int>> a, b, c;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back({x, i});
    }
    sort(a.rbegin(), a.rend());

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        b.push_back({x, i});
    }
    sort(b.rbegin(), b.rend());

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        c.push_back({x, i});
    }
    sort(c.rbegin(), c.rend());

    // check column wise
    long long ans = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                if (a[i].second != b[j].second && b[j].second != c[k].second && c[k].second != a[i].second)
                {
                    ans = max(ans, (long long)a[i].first + b[j].first + c[k].first);
                }
            }
        }
    }

    cout << ans << endl;

    return;
}

int main()
{
    optimize();
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}