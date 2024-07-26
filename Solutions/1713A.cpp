/*__________________In the name of Allah________________*/
/*___________________Solved By shafinkun________________*/
// Problem link : https://codeforces.com/problemset/problem/1713/A

#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
#define ll long long

void solve()
{
    int n;
    cin >> n;
    
    int Xmax = 0, Ymax = 0, Xmin = 0, Ymin = 0;
    for(int i = 0; i < n; ++i)
    {
        int x, y;
        cin >> x >> y;
        Xmax = max(Xmax, x);
        Ymax = max(Ymax, y);
        Xmin = min(Xmin, x);
        Ymin = min(Ymin, y);
    }

    int ans = 2 * (Xmax - Xmin + Ymax - Ymin);
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