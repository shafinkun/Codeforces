/*__________________In the name of Allah________________*/
/*___________________Solved By shafinkun________________*/
// Problem link : https://codeforces.com/problemset/problem/1934/B

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
vector<int> dp(101, INFINITY);

void solve()
{
    int n;
    cin >> n;

    if (n > 100)
    {
        int ans = n / 15;
        int temp = n % 15;

        cout << ans + dp[temp] << endl;

        return;
    }

    cout << dp[n] << endl;

    return;
}

signed main()
{
    optimize();

    dp[0] = 0;
    for (int i = 1; i <= 100; ++i)
    {
        for (auto x : v)
        {
            if (i >= x)
            {
                dp[i] = min(dp[i], dp[i - x] + 1);
            }
        }
    }

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}