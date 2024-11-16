/*___________________In the name of Allah________________*/
/*____________________Solved By shafinkun________________*/
// Problem link : https://codeforces.com/contest/1979/problem/B

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
    int x, y;
    cin >> x >> y;

    int ans = x ^ y;
    string s = bitset<64>(ans).to_string();
    reverse(s.begin(), s.end());

    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == '1')
        {
            cout << (1 << i) << endl;
            return;
        }
    }
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