/*_______________In the name of Allah_____________*/
/*________________Solved By shafinkun_____________*/
// Problem link : https://codeforces.com/problemset/problem/1777/A

#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
#define ll long long
#define NO cout << "NO" << endl
#define YES cout << "YES" << endl
void solve()
{
    int n;
    cin >> n;
    vector<ll> v(n);
    for (auto &x : v)
    {
        cin >> x;
    }

    int cnt = 0;
    for(int i = 1; i < n; ++i)
    {
        if(v[i] & 1 and v[i - 1] & 1)
        {
            cnt++;
        }
        else if(!(v[i] & 1) and !(v[i - 1] & 1))
        {
            cnt++;
        }
    }

    cout << cnt << endl;
    
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