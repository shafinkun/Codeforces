/*_______________In the name of Allah_____________*/
/*________________Solved By shafinkun_____________*/
// Problem link : https://codeforces.com/contest/1913/problem/C

#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
#define ll long long

unordered_map<int, int> a;
void solve()
{
    int m;
    cin >> m;

    for (int i = 0; i < m; ++i)
    {
        int t, v;
        cin >> t >> v;
        if (t == 1)
        {
            a[v]++;
        }
        else
        {
            int i = 29;
            while (i >= 0)
            {
                if (a[i])
                {
                    int k = v / (1 << i);
                    int l = min(k, a[i]);
                    v -= l * (1 << i);
                }
                i--;
            }
            if (v == 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
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