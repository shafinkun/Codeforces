/*__________________In the name of Allah________________*/
/*___________________Solved By shafinkun________________*/
// Problem link : https://codeforces.com/contest/1934/problem/A

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
    ll h, w, n;
    cin >> h >> w >> n;

    ll tot = h * w;
    cerr << tot << endl;

    for (ll i = 0; i < n; ++i)
    {
        ll x, temp;
        cin >> x;
        temp = pow(2, x);
        tot -= temp;
        tot -= temp;
        if (tot < 0)
        {
            cout << "No" << endl;
            return;
        }
    }
    cerr << tot << endl;
    cout << "Yes" << endl;

    return;
}

int main()
{
    optimize();
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve(t);
    }
    return 0;
}