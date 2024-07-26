/*_______________In the name of Allah_____________*/
/*________________Solved By shafinkun_____________*/
// Problem link : https://codeforces.com/problemset/problem/1791/C

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
    string s;
    cin >> s;

    for(int i = 0, j = n - 1; i < j; ++i, --j )
    {
        if(s[i] == s[j])
        {
            break;
        }
        else
        {
            s[j] = '#';
            s[i] = '#';
        }
    }
    cerr << s << endl;

    int cnt = count(s.begin(), s.end(), '#');
    cout << n - cnt << endl;

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