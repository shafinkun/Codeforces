/*___________________In the name of Allah________________*/
/*___________________Solved By shafinkun________________*/
// Problem link :

#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
const int MOD = 1e9 + 7;

void solve()
{
    string s;
    cin >> s;
    string s1 = s;
    sort(s1.begin(), s1.end());

    if (s1 == s)
    {
        cout << 1 << endl;
        return;
    }

    int cnt = 0;
    for (int i = 0; i < s.size() - 1; ++i)
    {
        if (s[i] != s[i + 1])
            cnt++;
    }
    int cnt1 = 0;
    reverse(s.begin(), s.end());
    for (int i = 0; i < s.size() - 1; ++i)
    {
        if (s[i] != s[i + 1])
            cnt1++;
    }
    int ans = min(cnt, cnt1);
    
    if (ans == 1)
        ans = 2;
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