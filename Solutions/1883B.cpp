#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    string s;
    cin >> n >> k >> s;

    unordered_map<char, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[s[i]]++;
    }

    int cnt = 0;
    for (auto x : mp)
    {
        if (x.second % 2 == 1)
        {
            cnt++;
        }
    }

    if (k - cnt >= -1)
    {
        cout << "YES" << endl;
        return;
    }

    cout << "NO" << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}