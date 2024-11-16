/*__________________In the name of Allah________________*/
/*___________________Solved By shafinkun________________*/
// Problem link : https://codeforces.com/contest/1862/problem/B

#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
#define ll long long

void solve()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (auto &x : v)
        cin >> x;

    vector<int> ans;
    ans.push_back(v[0]);
    for (int i = 1; i < n; ++i)
    {
        if (v[i] < v[i - 1])
            ans.push_back(v[i]);

        ans.push_back(v[i]);
    }

    cout << ans.size() << endl;
    for (auto x : ans)
        cout << x << " ";
    cout << endl;

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
    return 0;
}