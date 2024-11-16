/*__________________In the name of Allah________________*/
/*___________________Solved By shafinkun________________*/
// Problem link : https://codeforces.com/contest/1930/problem/B

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
    int n;
    cin >> n;

    for (int i = 1, j = n; i <= j; i++, j--)
    {
        cout << i << ' ';
        if (i != j)
            cout << j << ' ';
    }
    cout << endl;

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