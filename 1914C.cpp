/*_______________In the name of Allah_____________*/
/*________________Solved By shafinkun_____________*/
// Problem link : https://codeforces.com/contest/1914/problem/C

#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> a(n), b(n);

    for (auto &x : a)
        cin >> x;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (i == 0)
        {
            b[i] = x;
        }
        else
        {
            b[i] = max(b[i - 1], x);
        }
    }

    long long ans = 0, sum = 0;
    for (int i = 0; i < min(k, n); i++)
    {
        sum += a[i];
        long long rem = k - i - 1;
        long long temp = sum + rem * b[i];

        ans = max(ans, temp);
    }

    cout << ans << endl;
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
}