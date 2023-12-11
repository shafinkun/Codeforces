/*____________________In The Name Of Allah________________*/
/*_____________________Solved By shafinkun________________*/
#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'

void solve()
{
    int n, l;
    cin >> n >> l;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    int mx = INT_MIN;
    sort(v.begin(), v.end());
 
    for (int i = 1; i <= n; i++)
    {
        int dis = abs(v[i] - v[i - 1]);
        mx = max(mx, dis);
    }
    
    double d = 1.0 * mx / 2, fin_d = abs(0 - v[1]), fin_dd = abs(l - v[n]);
    
    cout << fixed << setprecision(10) << max(d, max(fin_d, fin_dd)) << endl;
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