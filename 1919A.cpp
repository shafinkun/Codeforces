/*__________________In the name of Allah________________*/
/*___________________Solved By shafinkun________________*/
// Problem link : https://codeforces.com/contest/1919/problem/A

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
    ll a, b;
    cin >> a >> b;

    ll c = a + b;

    cout << (c & 1 ? "Alice" : "Bob") << endl;
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