/*__________________In the name of Allah________________*/
/*___________________Solved By shafinkun________________*/
// Problem link : https://codeforces.com/contest/1927/problem/A

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
    string s;
    cin >> s;

    int first = 0, last = 0;
    for(int i = 0; i < n; i++)
    {
        if(s[i] == 'B')
        {
            first = i;
            break;
        }
    }
    for(int i = n - 1; i >= 0; i--)
    {
        if(s[i] == 'B')
        {
            last = i;
            break;
        }
    }

    int ans = (last - first) + 1;
    cout << ans << endl;
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