/*__________________In the name of Allah________________*/
/*___________________Solved By shafinkun________________*/
// Problem link : https://codeforces.com/problemset/problem/1858/A

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
    int a, b, c;
    cin >> a >> b >> c;

    if (c & 1)
    {
        // Katie's turn
        a >= b ? cout << "First" << endl : cout << "Second" << endl;
        return;
    }
    else
    {
        // Anna's turn
        a > b ? cout << "First" << endl : cout << "Second" << endl;
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