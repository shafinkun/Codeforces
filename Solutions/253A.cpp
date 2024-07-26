/*_______________In the name of Allah_____________*/
/*________________Solved By shafinkun_____________*/
// Problem link : https://codeforces.com/problemset/problem/253/A

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
    int b, g;
    cin >> b >> g;

    if (b >= g)
    {
        for (int i = 1; i <= g; ++i)
        {
            cout << "BG";
        }
        for (int i = 1; i <= b - g; ++i)
        {
            cout << "B";
        }
    }
    else
    {
        for (int i = 1; i <= b; ++i)
        {
            cout << "GB";
        }
        for (int i = 1; i <= g - b; ++i)
        {
            cout << "G";
        }
    }

    return;
}

int main()
{
    optimize();
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}