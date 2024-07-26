/*_______________In the name of Allah_____________*/
/*________________Solved By shafinkun_____________*/
// Problem link : https://codeforces.com/contest/1915/problem/A

#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'

void solve()
{
    short a, b, c;
    cin >> a >> b >> c;

    if (a != b and a != c)
    {
        cout << a << endl;
        return;
    }
    else if(b != a and b != c)
    {
        cout << b << endl;
        return;
    }
    else
    {
        cout << c << endl;
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