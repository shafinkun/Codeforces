/*_______________In the name of Allah_____________*/
/*________________Solved By shafinkun_____________*/
// Problem link : https://codeforces.com/contest/1912/problem/L

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

    int totL = count(s.begin(), s.end(), 'L');
    int totO = count(s.begin(), s.end(), 'O');

    int cntL = 0, cntO = 0;
    for (int i = 0; i + 1 < n; i++)
    {
        if (s[i] == 'L')
        {
            cntL++;
        }
        else
        {
            cntO++;
        }

        int rearL = totL - cntL;
        int rearO = totO - cntO;

        if (rearL != cntL && rearO != cntO)
        {
            cout << ++i << endl;
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