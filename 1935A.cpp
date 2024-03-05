/*__________________In the name of Allah________________*/
/*___________________Solved By shafinkun________________*/
// Problem link : https://codeforces.com/contest/1935/problem/A

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
    string s, rev;
    cin >> s;
    rev = s;
    reverse(rev.begin(), rev.end());

    while(n--)
    {
        if(rev < s)
        {
            rev += s;
            s = rev;
            reverse(rev.begin(), rev.end());
        }
        else
        {
            break;
        }
    }
    cout << s << endl;

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