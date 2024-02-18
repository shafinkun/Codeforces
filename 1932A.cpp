/*__________________In the name of Allah________________*/
/*___________________Solved By shafinkun________________*/
// Problem link : https://codeforces.com/contest/1932/problem/A

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
    ll n;
    cin >> n;

    vector<char> v(n);
    for(auto &x : v) cin >> x;

    ll cnt = 0;
    for(int i = 0; i < n; ++i)
    {
        if(v[i] == '@') cnt++;
        else if(v[i] == '*' and v[i + 1] == '*') break;
    }
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
        solve(t);
    }
    return 0;
}