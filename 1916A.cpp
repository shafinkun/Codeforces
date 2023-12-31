/*_______________In the name of Allah_____________*/
/*________________Solved By shafinkun_____________*/
// Problem link : https://codeforces.com/contest/1916/problem/A

#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'

void solve()
{
    int n, k;
    cin >> n >> k;

    long long mult = 1;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mult *= x;
    }

    if (mult <= 2023 and 2023 % mult == 0)
    {
        cout << "YES" << endl;
        cout << 2023 / mult << ' ';
        k--;
        while (k--)
        {
            cout << 1 << ' ';
        }
        cout << endl;
    }

    else
    {
        cout << "NO" << endl;
    }
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