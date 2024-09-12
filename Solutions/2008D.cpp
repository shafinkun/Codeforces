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
    int n;
    cin >> n;
    vector<int> p(n), F(n, 0);
    vector<bool> visited(n, false);
    string s;

    for (int i = 0; i < n; ++i)
    {
        cin >> p[i];
        p[i]--;
    }

    cin >> s;

    for (int i = 0; i < n; ++i)
    {
        if (!visited[i])
        {
            vector<int> c;
            int cnt = 0;
            int x = i;

            while (!visited[x])
            {
                visited[x] = true;
                c.push_back(x);
                if (s[x] == '0')
                {
                    cnt++;
                }
                x = p[x];
            }

            for (auto x : c)
            {
                F[x] = cnt;
            }
        }
    }

    for (int i = 0; i < n; ++i)
        cout << F[i] << " ";

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