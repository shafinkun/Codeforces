/*_______________In the name of Allah_____________*/
/*________________Solved By shafinkun_____________*/
// Problem link : https://codeforces.com/contest/1714/problem/C

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
    ll n;
    cin >> n;
    vector<ll> v;
    ll i = 9;
    while (n > 0)
    {
        v.push_back(min(i, n));
        n -= i;
        i--;
    }

    for(int i = v.size() - 1; i >= 0; --i)
        cout << v[i];

    cout << endl;
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