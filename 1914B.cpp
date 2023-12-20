/*_______________In the name of Allah_____________*/
/*________________Solved By shafinkun_____________*/
// Problem link : https://codeforces.com/contest/1914/problem/B

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

    for (int i = n; i >= k + 2; --i)
    {
        cout << i << ' ';
    }
    for (int i = 1; i <= k + 1; ++i)
    {
        cout << i << ' ';
    }
    cout << endl;

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