/*__________________In the name of Allah________________*/
/*___________________Solved By shafinkun________________*/
// Problem link : https://codeforces.com/contest/1934/problem/A

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

void solve(int a)
{
    int n;
    cin >> n;

    deque<int> v(n);
    for (auto &x : v)
        cin >> x;

    sort(v.begin(), v.end());
    
    int tot = (v[n - 1] - v[0]) + (v[n - 2] - v[1]);
    cout << 2 * tot << endl;

    return;
}

int main()
{
    optimize();
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve(t);
    }
    return 0;
}