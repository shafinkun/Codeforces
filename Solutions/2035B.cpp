/*___________________In the name of Allah________________*/
/*____________________Solved By shafinkun________________*/


// Problem link : https://codeforces.com/contest/2035/problem/B
// Inquilab Zindabad!!!
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

    if (n == 1 or n == 3)
    {
        cout << -1 << endl;
        return;
    }

    if (n == 2)
    {
        cout << "66" << endl;
        return;
    }

    if (n & 1)
    {
        n -= 5;
        while (n--)
            cout << "3";
        cout << "36366" << endl;

        return;
    }
    else
    {
        n -= 2;
        while (n--)
            cout << "3";
        cout << "66" << endl;

        return;
    }
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