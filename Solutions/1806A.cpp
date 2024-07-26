/*__________________In the name of Allah________________*/
/*___________________Solved By shafinkun________________*/
// Problem link : https://codeforces.com/problemset/problem/1806/A

#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
#define ll long long
#define yes puts("YES")
#define no puts("NO")

void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (b <= d)
    {
        int y = d - b;
        int x = a + y;

        if (x < c)
            cout << -1 << endl;
        else
            cout << y + x - c << endl;
    }
    else
        cout << -1 << endl;

    return;
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