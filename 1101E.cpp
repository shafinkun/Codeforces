/*___________________In the name of Allah________________*/
/*____________________Solved By shafinkun________________*/
// Problem link : https://codeforces.com/contest/1101/problem/E

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

    char c;
    int a, b, maxX = 0, maxY = 0;
    while (n--)
    {
        cin >> c >> a >> b;

        if (a < b)
            swap(a, b);

        if(c == '+')
        {
            maxX = max(maxX, a);
            maxY = max(maxY, b);
        }
        else
        {
            if(a < maxX or b < maxY)
                no;
            else
                yes;
        }
    }
    return;
}

signed main()
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