/*_______________In the name of Allah_____________*/
/*________________Solved By shafinkun_____________*/
// Problem link : https://codeforces.com/contest/1916/problem/C

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
    ll n;
    cin >> n;
    ll ans = 0;
    int even = 0, odd = 0;

    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        ans += x;

        odd += x & 1;
        ll temp = odd / 3;
        temp += (odd % 3 == 1 and i);
        cout << ans - temp << ' ';
    }
    cout << endl;

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