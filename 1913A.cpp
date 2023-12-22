/*_______________In the name of Allah_____________*/
/*________________Solved By shafinkun_____________*/
// Problem link : https://codeforces.com/problemset/problem/1913/A

#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'

void solve()
{
    string s;
    cin >> s;

    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] != '0')
        {
            string a = s.substr(0, i);
            string b = s.substr(i, s.size());

            if (stoi(b) > stoi(a))
            {
                cout << a << ' ' << b << endl;
                return;
            }
        }
    }
    cout << -1 << endl;
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
}