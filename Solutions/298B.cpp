/*_______________In the name of Allah_____________*/
/*________________Solved By shafinkun_____________*/
// Problem link : https://codeforces.com/problemset/problem/298/B

#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'


void solve()
{
    int n, a1, a2, b1, b2;
    cin >> n >> a1 >> a2 >> b1 >> b2;

    string s;
    cin >> s;

    for (int i = 0; i < n; ++i)
    {
        if (s[i] == 'E' and a1 < b1)
        {
            a1++;
        }
        else if (s[i] == 'W' and a1 > b1)
        {
            a1--;
        }
        else if (s[i] == 'N' and a2 < b2)
        {
            a2++;
        }
        else if (s[i] == 'S' and a2 > b2)
        {
            a2--;
        }

        // cerr << a1 << ' ' << a2 << endl;
        if (a1 == b1 and a2 == b2)
        {
            cout << i + 1 << endl;
            return;
        }
    }
    cout << -1 << endl;

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