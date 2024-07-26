/*__________________In the name of Allah________________*/
/*___________________Solved By shafinkun________________*/
// Problem link : https://codeforces.com/contest/1928/problem/A

#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
#define ll long long
#define yes puts("Yes")
#define no puts("No")

void solve()
{
    int a, b;
    cin >> a >> b;
    if (a < b)
        swap(a, b);

    if (!(a & 1) and !(b & 1))
        yes;
    else if ((a == 1) or (a & 1 and b & 1) or (b * 2 == a))
        no;
    else
        yes;

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