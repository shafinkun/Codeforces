/*_______________In the name of Allah_____________*/
/*________________Solved By shafinkun_____________*/
// Problem link : https://codeforces.com/problemset/problem/1920/A

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
    int n;
    cin >> n;

    int mini = INFINITY, maxi = 0;
    vector<int> v;
    for (int i = 0; i < n; ++i)
    {
        int x, y;
        cin >> x >> y;

        if (x == 1) maxi = max(maxi, y);
        else if (x == 2) mini = min(mini, y);
        else v.push_back(y);
    }

    int ans = mini - maxi;

    if (ans >= 0)
    {
        for (auto x : v)
        {
            if (x >= maxi and x <= mini)
            {
                ans--;
            }
        }
        cout << ++ans << endl;
        return;
    }

    cout << 0 << endl;
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