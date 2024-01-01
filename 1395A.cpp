/*_______________In the name of Allah_____________*/
/*________________Solved By shafinkun_____________*/
// Problem link : https://codeforces.com/contest/1395/problem/A

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
    int r, g, b, w;
    cin >> r >> g >> b >> w;

    if (((r % 2) + (g % 2) + (b % 2) + (w % 2) <= 1) || (r and g and b and ((r - 1) % 2 + (g - 1) % 2 + (b - 1) % 2 + (w + 3) % 2 <= 1)))
        cout << "Yes\n";
    else
        cout << "No\n";
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