/*___________________In the name of Allah________________*/
/*___________________Solved By shafinkun________________*/
// Problem link : https://codeforces.com/contest/1985/problem/A

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
    getline(cin, s);

    swap(s[0], s[4]);

    cout << s << endl;
    return;
}

int main()
{
    optimize();

    int t = 1;
    cin >> t;
    cin.ignore();

    while (t--)
    {
        solve();
    }
    return 0;
}