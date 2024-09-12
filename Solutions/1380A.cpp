/*___________________In the name of Allah________________*/
/*____________________Solved By shafinkun________________*/
// Problem link : https://codeforces.com/problemset/problem/1380/A
// Inquilab Zindabad!!!
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
    int n;
    cin >> n;

    vector<int> v(n);
    for (auto &x : v)
        cin >> x;

    for (int i = 0; i < n; ++i)
    {
        bool flag = false;
        int ind;
        for (int j = i + 1; j < n; ++j)
        {
            if (v[j] > v[i])
            {
                flag = true;
                ind = j;
                break;
            }
        }
        if (flag)
        {
            for (int k = ind; k < n; ++k)
            {
                if (v[ind] > v[k])
                {
                    yes;
                    cout << i + 1 << ' ' << ind + 1 << ' ' << k + 1 << endl;
                    return;
                }
            }
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