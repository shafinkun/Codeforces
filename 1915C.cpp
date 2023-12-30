/*_______________In the name of Allah_____________*/
/*________________Solved By shafinkun_____________*/
// Problem link : https://codeforces.com/contest/1915/problem/C

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
    int n;
    cin >> n;

    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        sum += a;
    }

    ll ans = sqrt(sum);

    cout << ((ans * ans) == sum ? "YES" : "NO") << endl;

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