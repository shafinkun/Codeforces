/*__________________In the name of Allah________________*/
/*___________________Solved By shafinkun________________*/
// Problem link : https://codeforces.com/problemset/problem/1834/A

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
    int n;
    cin >> n;

    int sum = 0, neg = 0;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        sum += x;
        neg += (x < 0);
    }

    int cnt = 0;
    while (1)
    {
        if (sum >= 0 and !(neg & 1))
        {
            cout << cnt << endl;
            return;
        }
        neg--;
        sum += 2;
        cnt++;
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