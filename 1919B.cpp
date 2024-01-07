/*__________________In the name of Allah________________*/
/*___________________Solved By shafinkun________________*/
// Problem link : https://codeforces.com/contest/1919/problem/B

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
    string s;
    cin >> s;

    int plus = 0, minus = 0;
    for (size_t i = 0; i < n; i++)
    {
        if (s[i] == '+')
            plus++;
        else
            minus++;
    }

    int ans = abs(plus - minus);

    cout << ans << endl;
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