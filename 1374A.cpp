/*__________________In the name of Allah________________*/
/*___________________Solved By shafinkun________________*/
// Problem link : https://codeforces.com/contest/1374/problem/A

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
    int x, y, n;
    cin >> x >> y >> n;

    if (x > n)
    {
        cout << 0 << endl;
        return;
    }
    else if(x == n)
    {
        cout << n << endl;
        return;
    }
    
    int ans = n % x;

    if (ans == y)
    {
        cout << n << endl;
        return;
    }
    else if (ans < y)
    {
        cout << n - (x - (y - ans)) << endl;
        return;
    }
    else
    {
        cout << n - (ans - y) << endl;
        return;
    }

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