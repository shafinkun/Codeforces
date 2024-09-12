/*___________________In the name of Allah________________*/
/*____________________Solved By shafinkun________________*/
// Problem link :

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
    int r;
    cin >> r;

    deque<int> v;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            char c;
            cin >> c;
            if (c == '#')
                v.push_front(j + 1);
        }
    }
    for (auto x : v)
        cout << x << ' ';
    cout << endl;
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