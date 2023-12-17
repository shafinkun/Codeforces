/*_______________In the name of Allah_____________*/
/*________________Solved By shafinkun_____________*/
// Problem link : https://codeforces.com/contest/1912/problem/L

#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'

void solve()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (auto &x : v) cin >> x;

    int maxi = *max_element(v.begin(), v.end());

    int cnt = 0;
    for (auto x : v)
    {
        if (maxi > x)
        {
            cnt += (maxi - x);
        }
    }

    cout << cnt << endl;

    return;
}
int main()
{
    optimize();
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}