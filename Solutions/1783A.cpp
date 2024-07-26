/*_______________In the name of Allah_____________*/
/*________________Solved By shafinkun_____________*/
// Problem link : https://codeforces.com/problemset/problem/1783/A

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
    short n;
    cin >> n;

    vector<int> v(n);
    for (auto &x : v)
    {
        cin >> x;
    }

    sort(v.begin(), v.end());
    if (v[0] == v[n - 1])
        NO;
    else
    {
        YES;
        cout << v[n - 1] << ' ';
        for (int i = 0; i < n - 1; i++)
        {
            cout << v[i] << ' ';
        }
        cout << endl;
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