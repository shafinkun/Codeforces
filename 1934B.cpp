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

vector<int> v = {1, 3, 6, 10, 15};
void solve()
{
    ll n;
    cin >> n;

    vector<ll> dp(1e3+7, LLONG_MAX);
    dp[0] = 0;

    for(ll i = 1; i <= n; ++i)
    {
        for(auto x : v)
        {
            if(i >= x)
            {
                dp[i + x] = min(dp[i], dp[i - x] + 1);
            }
            else
            {
                break;
            }
        }
    }
    cerr << dp[n] << endl;
    cout << dp[n] << endl;

    return;    
}

signed main()
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