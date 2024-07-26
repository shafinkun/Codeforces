/*_______________In the name of Allah_____________*/
/*________________Solved By shafinkun_____________*/
// Problem link : https://codeforces.com/problemset/problem/1913/B

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

    int one = count(s.begin(), s.end(), '1');
    int zero = count(s.begin(), s.end(), '0');

    if (one == zero)
    {
        cout << 0 << endl;
        return;
    }

    for (size_t i = 0; i < s.size(); i++)
    {
        if (s[i] == '0')
        {
            one--;
            if (one < 0)
            {
                cout << s.size() - i << endl;
                return;
            }
        }
        else
        {
            zero--;
            if (zero < 0)
            {
                cout << s.size() - i << endl;
                return;
            }
        }
    }
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