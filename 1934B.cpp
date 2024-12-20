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
vector<int> dp(501, INFINITY);

int coin(int a)
{
    dp[0] = 0;
    for (int i = 1; i <= a; ++i)
    {
        for (auto x : v)
        {
            if (i >= x)
            {
                dp[i] = min(dp[i], dp[i - x] + 1);
            }
        }
    }
    return dp[a];
}

void solve()
{
    int n;
    cin >> n;
    int num = 0;

    if (n > 100)
    {
        num = (n - 100) / 15;
        n = n - (num * 15);
    }
    int ans = coin(n);
    cout << num + ans << endl;

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