/*_______________In the name of Allah_____________*/
/*________________Solved By shafinkun_____________*/
// Problem link : https://codeforces.com/contest/1714/problem/A

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
    int n, h, m;
    cin >> n >> h >> m;

    ll time = h * 60 + m;

    ll ans = 1440;

    while (n--)
    {
        cin >> h >> m;
        ll temp = h * 60 + m;

        if (temp < time)
            temp += 1440;

        ans = min(ans, temp - time);
    }

    cout << ans / 60 << ' ' << ans % 60 << endl;

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