/*__________________In the name of Allah________________*/
/*___________________Solved By shafinkun________________*/
// Problem link : https://codeforces.com/problemset/problem/1814/A

#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
#define ll long long
#define yes puts("YES")
#define no puts("NO")

void solve()
{
    ll n, k;
    cin >> n >> k;

    if (!(n & 1) or !((n - k) & 1))
        yes;
    else
        no;

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