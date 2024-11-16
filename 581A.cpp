/*____________________In The Name Of Allah________________*/
/*_____________________Solved By shafinkun________________*/
// Problem link : https://codeforces.com/problemset/problem/581/A

#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'

void solve()
{
    int a, b;
    cin >> a >> b;

    int odd = abs(a - b) / 2;

    cout << min(a, b) << " " << odd << endl;
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
}