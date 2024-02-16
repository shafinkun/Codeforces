/*__________________In the name of Allah________________*/
/*___________________Solved By shafinkun________________*/
// Problem link : https://codeforces.com/contest/1929/problem/B

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

void solve(int a)
{
    ll n, k;
    cin >> n >> k;

    ll most = (4 * n) - 2;
    if (k == most)
        cout << 2 * n << endl;
    else if (k == (most - 1))
        cout << 2 * n - 1 << endl;
    else if (k == (most - 2))
        cout << 2 * n - 2 << endl;
    else
        /*WTH!!! ceil() doesn't work properly!!!*/
        cout << (k & 1 ? (k + 1) / 2 : k / 2) << endl;

    return;
}

int main()
{
    optimize();
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve(t);
    }
    return 0;
}