/*__________________In the name of Allah________________*/
/*___________________Solved By shafinkun________________*/
// Problem link : https://codeforces.com/contest/1805/problem/A

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
    ll n;
    cin >> n;

    ll XOR = 0;
    for (int i = 0; i < n; ++i)
    {
        ll x;
        cin >> x;
        XOR ^= x;
    }

    if(XOR == 0 or (n & 1))
    {
        cout << XOR << endl;
    }
    else 
    {
        cout << -1 << endl;
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