/*__________________In the name of Allah________________*/
/*__________________Solved by: shafinkun________________*/

// problem link: https://codeforces.com/problemset/problem/1917/A

#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'

typedef long long ll;

void solve()
{
    ll n;
    cin >> n;

    ll zero = 0, neg = 0;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;

        //Hell mate!!! If you get any zero and break or print 0 and return!!!
        //It doesn't work, CF says it's not optimal on test 6!!! :(

        if (x == 0)
            zero++;
        else if (x < 0)
            neg++;
    }
    if (neg & 1 || zero)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << 1 << endl;
        cout << "1 0" << endl;
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