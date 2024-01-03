/*_______________In the name of Allah_____________*/
/*________________Solved By shafinkun_____________*/
// Problem link : https://codeforces.com/problemset/problem/1916/C

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
    vector<ll> v(n + 1, 0);

    for (int i = 1; i <= n; ++i)
    {
        int a;
        cin >> a;

        v[i] = v[i - 1] + a;
    }

    for (int i = n; i > 1; --i)
    {
        if (v[i] & 1)
        {
            v[i] -= 1;
            if (i != 2)
                v[i - 1] -= 1;
        }
    }

    for (int i = 1; i <= n; ++i)
    {
        cout << v[i] << " ";
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
    return 0;
}