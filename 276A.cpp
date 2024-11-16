/*_______________In the name of Allah_____________*/
/*________________Solved By shafinkun_____________*/
// Problem link : https://codeforces.com/problemset/problem/276/A

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

    vector<int> v(n);
    for(int i = 0; i < n; i++)
    {
        long long f, t;
        cin >> f >> t;
        if(t > k)
        {
            v[i] = {f - (t - k)};
        }
        else
        {
            v[i] = {f};
        }
    }
    sort(v.rbegin(), v.rend());

    cout << v[0] << endl;
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
    return 0;
}