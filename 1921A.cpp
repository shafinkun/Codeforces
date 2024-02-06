/*__________________In the name of Allah________________*/
/*___________________Solved By shafinkun________________*/
// Problem link : https://codeforces.com/problemset/problem/1921/A

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
    vector<pair<int, int>> v;
    for(int i = 0; i < 4; ++i)
    {
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }
    sort(v.begin(), v.end());

    int ans = v[0].second - v[1].second;

    cout << ans * ans << endl;
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