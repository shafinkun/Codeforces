/*__________________In the name of Allah________________*/
/*___________________Solved By shafinkun________________*/
// Problem link : https://codeforces.com/problemset/problem/1930/A

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

void solve(int a)
{
    int n;
    cin >> n;

    vector<int> v(2 * n);
    for (auto &x : v)
        cin >> x;

    sort(v.begin(), v.end());

    
    ll ans = 0;
    for(int i = 0; i < 2 * n; i += 2)
    {
        ans += v[i];
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
        solve(t);
    }
    return 0;
}