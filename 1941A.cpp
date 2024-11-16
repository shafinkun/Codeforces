/*__________________In the name of Allah________________*/
/*___________________Solved By shafinkun________________*/
// Problem link : https://codeforces.com/problemset/problem/1941/A

#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
#define ll long long
#define yes puts("YES")
#define no puts("NO")

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> v1(n), v2(m);
    for (auto &x : v1)
        cin >> x;
    for (auto &x : v2)
        cin >> x;

    int cnt = 0;

    for (auto x : v1)
    {
        for (auto y : v2)
        {
            if (x + y <= k)
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