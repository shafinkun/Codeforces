/*_______________In the name of Allah_____________*/
/*________________Solved By shafinkun_____________*/
// Problem link : https://codeforces.com/contest/1367/problem/A

#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
#define ll long long
#define NO cout << "NO" << endl
#define YES cout << "YES" << endl
void solve()
{
    string s;
    cin >> s;
    for (int i = 2; i < s.size() - 1; i += 2)
    {
        s.erase(s.begin() + i);
        i--;
    }
    cout << s << endl;
}

int main()
{
    optimize();
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}