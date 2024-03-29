/*__________________In the name of Allah________________*/
/*___________________Solved By shafinkun________________*/
// Problem link : https://codeforces.com/problemset/problem/1946/A

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

    deque<int> dq(n);
    for(auto &x : dq) cin >> x;
    sort(dq.begin(), dq.end());

    int mid = (n & 1) ? (n / 2) : n / 2 - 1;

    int cnt = count(dq.begin() + mid, dq.end(), dq[mid]);

    cout << cnt << endl;

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