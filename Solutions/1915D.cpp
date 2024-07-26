/*_______________In the name of Allah_____________*/
/*________________Solved By shafinkun_____________*/
// Problem link : https://codeforces.com/problemset/problem/1915/D

#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'

void solve()
{
    int n;
    cin >> n;
    string s, ans = "";
    cin >> s;

    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == 'a' or s[i] == 'e')
        {
            ans += s[i];
            i--;
            ans += s[i];
            if (i != 0)
                ans += '.';
        }
        else
        {
            ans += s[i];
            i--;
            ans += s[i];
            i--;
            ans += s[i];
            if (i != 0)
                ans += '.';
        }
    }
    reverse(ans.begin(), ans.end());

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