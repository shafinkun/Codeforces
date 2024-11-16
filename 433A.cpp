/*___________________In the name of Allah________________*/
/*____________________Solved By shafinkun________________*/
// Problem link : https://codeforces.com/problemset/problem/433/A

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

    int hundreds = 0;
    for(int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        if (temp == 100)
            hundreds++;
    }

    ((hundreds & 1) or ((hundreds == 0 and (n & 1)))) ? no : yes;

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