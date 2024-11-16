/*___________________In the name of Allah________________*/
/*___________________Solved  By shafinkun________________*/
// Problem link : https://codeforces.com/problemset/problem/1624/B

#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
const int MOD = 1e9 + 7;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;

    //for the first number
    int temp1 = b - c;
    if((b + temp1) % a == 0 and (b + temp1) > 0)
    {
        yes;
        return;
    }
    //for the third number
    int temp3 = b - a;
    if((b + temp3) % c == 0 and (b + temp3) > 0)
    {
        yes;
        return;
    }

    //for the second number
    int temp2 = (a + c) / 2;
    if((temp2 - a) == (c - temp2) and temp2 % b == 0 and temp2 > 0)
    {
        yes;
        return;
    }

    no;

    return;
}

signed main()
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