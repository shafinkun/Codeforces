/*_______________In the name of Allah_____________*/
/*________________Solved By shafinkun_____________*/
// Problem link : https://codeforces.com/contest/1915/problem/B

#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'

void solve()
{
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    // for s1:
    if (find(s1.begin(), s1.end(), 'A') == s1.end())
    {
        cout << 'A' << endl;
        return;
    }
    if (find(s1.begin(), s1.end(), 'B') == s1.end())
    {
        cout << 'B' << endl;
        return;
    }
    if (find(s1.begin(), s1.end(), 'C') == s1.end())
    {
        cout << 'C' << endl;
        return;
    }
    // for s2:
    if (find(s2.begin(), s2.end(), 'A') == s2.end())
    {
        cout << 'A' << endl;
        return;
    }
    if (find(s2.begin(), s2.end(), 'B') == s2.end())
    {
        cout << 'B' << endl;
        return;
    }
    if (find(s2.begin(), s2.end(), 'C') == s2.end())
    {
        cout << 'C' << endl;
        return;
    }
    // for s3:
    if (find(s3.begin(), s3.end(), 'A') == s3.end())
    {
        cout << 'A' << endl;
        return;
    }
    if (find(s3.begin(), s3.end(), 'B') == s3.end())
    {
        cout << 'B' << endl;
        return;
    }
    if (find(s3.begin(), s3.end(), 'C') == s3.end())
    {
        cout << 'C' << endl;
        return;
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
    return 0;
}