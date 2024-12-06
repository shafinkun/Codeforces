/*___________________In the name of Allah________________*/
/*____________________Solved By shafinkun________________*/
// Problem link : https://codeforces.com/contest/2050/problem/B
// Inqilab Zindabad!!!
#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
const int MOD = 1e9 + 7;

void solve()
{
    int n, sum_even = 0, sum_odd = 0, sum_tot = 0;
    cin >> n;

    vector<int> v(n + 1);

    for (int i = 1; i <= n; ++i)
    {
        cin >> v[i];
        sum_tot += v[i];

        if (i & 1)
            sum_odd += v[i];
        else
            sum_even += v[i];
    }

    if(sum_tot % n == 0)
    {
        int odd_pos = (n + 1) / 2;
        int even_pos = n / 2;

        int tot_avg = sum_tot / n, even_avg = sum_even / even_pos, odd_avg = sum_odd / odd_pos;

        if(tot_avg == even_avg and tot_avg == odd_avg and even_avg == odd_avg)
        {
            yes;
            return;
        }
    }
    no;
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