/*___________________In the name of Allah________________*/
/*___________________Solved By shafinkun________________*/
// Problem link : https://codeforces.com/contest/1974/problem/A

#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
const int MOD = 1e9 + 7;

void solve()
{
    int x, y;
    cin >> x >> y;

    int display, total;
    if (y & 1)
    {
        display = (y / 2) + 1;
        total = (display - 1) * 7 + 11;
    }
    else
    {
        display = (y / 2);
        total = display * 7;
    }
    if (x <= total)
    {
        cout << display << endl;
    }
    else
    {
        int temp = (abs(total - x) + 14) / 15;
        cout << display + temp << endl;
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