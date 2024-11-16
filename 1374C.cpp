/*__________________In the name of Allah________________*/
/*___________________Solved By shafinkun________________*/
// Problem link : https://codeforces.com/problemset/problem/1374/C

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
    int n;
    cin >> n;

    string s;
    cin >> s;

    int cnt = 0, ans = 0;

    for (int i = 0; i < n; ++i)
    {
        if (s[i] == '(')
            ++cnt;

        else
            --cnt;

        if (cnt < 0)
        {
            ++ans;
            cnt = 0;
        }
    }

    cout << ans << endl;

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