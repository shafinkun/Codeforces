/*_______________In the name of Allah_____________*/
/*________________Solved By shafinkun_____________*/
// Problem link : https://codeforces.com/problemset/problem/1788/A

#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
#define NO cout << "NO" << endl
#define YES cout << "YES" << endl
void solve()
{
    int n;
    cin >> n;

    int two = 0;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        two += (v[i] == 2);
    }

    if (two & 1)
    {
        cout << -1 << endl;
        return;
    }

    int cnt = 0;
    for (int i = 1; i <= n; ++i)
    {
        cnt += (v[i] == 2);
        if (cnt == two / 2)
        {
            cout << i << endl;
            return;
        }
    }

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